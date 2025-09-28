#include <bits/stdc++.h>
#include <filesystem>
#include <regex>
using namespace std;
namespace fs = std::filesystem;

/*
 * Codeforces Repo Sorter
 * - Scans *.cpp
 * - Detects (contestId,index)
 * - Fetches name+rating from Codeforces API (via curl)
 * - Moves files to <ratingBucket>/<contestId><index>.cpp
 * - Rebuilds README.md with a table
 *
 * Build: g++ -std=c++17 -O2 cf_sorter.cpp -o cf_sorter
 * Usage: ./cf_sorter [--dry-run]
 */

struct ProblemKey {
    int contestId{};
    string index; // like "A", "B1"
};
struct ProblemMeta {
    string name;   // "Johnny and Ancient Computer"
    int rating;    // -1 if missing
};

static string trim(const string& s){
    size_t a = s.find_first_not_of(" \t\r\n");
    if (a==string::npos) return "";
    size_t b = s.find_last_not_of(" \t\r\n");
    return s.substr(a, b-a+1);
}

static bool parse_from_filename(const fs::path& p, ProblemKey& out){
    // Patterns to try:
    // 1) 1362A.cpp
    // 2) 1362A_some_name.cpp
    // 3) A.cpp with parent folder "1362"
    // 4) A_* with parent folder "1362"
    string fname = p.filename().string();
    // 1/2: (\d+)([A-Z][0-9]?) ...
    {
        regex r(R"(^(\d+)([A-Z][0-9]?)[^/\\]*\.cpp$)");
        smatch m;
        if (regex_match(fname, m, r)) {
            out.contestId = stoi(m[1].str());
            out.index = m[2].str();
            return true;
        }
    }
    // 3/4: parent is contestId, file starts with Index (A, B1, etc.)
    if (p.has_parent_path()) {
        string parent = p.parent_path().filename().string();
        // parent digits?
        if (regex_match(parent, regex(R"(^\d+$)"))) {
            // filename like A.cpp or A1.cpp or A_whatever.cpp
            regex r2(R"(^([A-Z][0-9]?)(?:[^/\\]*)\.cpp$)");
            smatch m2;
            if (regex_match(fname, m2, r2)) {
                out.contestId = stoi(parent);
                out.index = m2[1].str();
                return true;
            }
        }
    }
    return false;
}

static bool parse_from_source_url(const fs::path& p, ProblemKey& out){
    // Look for URLs in the first ~200 lines
    ifstream fin(p);
    if (!fin) return false;
    string line;
    int lines=0;
    // Typical forms:
    // https://codeforces.com/contest/1362/problem/A
    // https://codeforces.com/problemset/problem/1362/A
    // http(s)://codeforces.com/group/..../contest/####/problem/A  (we'll still try to catch contest/####/problem/X)
    regex r1(R"(codeforces\.com/(?:problemset/problem|contest)/(\d+)/([A-Z][0-9]?))");
    while (lines<200 && getline(fin, line)) {
        lines++;
        smatch m;
        if (regex_search(line, m, r1)) {
            out.contestId = stoi(m[1].str());
            out.index = m[2].str();
            return true;
        }
    }
    return false;
}

static string run_curl(const string& url){
    // Use popen to run curl -s
    string cmd = "curl -s \"" + url + "\"";
#ifdef _WIN32
    FILE* pipe = _popen(cmd.c_str(), "r");
#else
    FILE* pipe = popen(cmd.c_str(), "r");
#endif
    if (!pipe) return "";
    string result;
    char buf[4096];
    while (true) {
        size_t n = fread(buf, 1, sizeof(buf), pipe);
        if (n==0) break;
        result.append(buf, buf+n);
    }
#ifdef _WIN32
    _pclose(pipe);
#else
    pclose(pipe);
#endif
    return result;
}

// extremely small JSON "finder" (regex-based) to grab name+rating for a (contestId,index) from the giant API JSON.
// We search for the object in the "problems" array with matching contestId and index, then pick the nearest "name" and "rating".
static bool extract_meta_from_api_blob(const string& blob, const ProblemKey& key, ProblemMeta& out){
    // To avoid false positives, we anchor on `"contestId":<id>,"index":"<index>"`
    // Allow optional whitespace and order variations (but Codeforces keeps order as contestId then index).
    // We'll search a window after the anchor for "name":"..." and "rating":1234
    string anchor = "\"contestId\":" + to_string(key.contestId) + ",\"index\":\"" + key.index + "\"";
    size_t pos = blob.find(anchor);
    if (pos == string::npos) return false;

    // Search forward for name (up to say 2KB after anchor)
    size_t window_end = min(blob.size(), pos + 2048);
    string window = blob.substr(pos, window_end - pos);

    // name
    {
        regex r_name(R"("name":"([^"]+)")");
        smatch m;
        if (regex_search(window, m, r_name)) {
            out.name = m[1].str();
        } else {
            out.name = "";
        }
    }
    // rating (optional)
    out.rating = -1;
    {
        regex r_rating(R"("rating":(\d+))");
        smatch m;
        if (regex_search(window, m, r_rating)) {
            out.rating = stoi(m[1].str());
        }
    }
    return true;
}

static string rating_bucket_dir(int rating){
    if (rating < 0) return "unrated";
    int b = (rating/100)*100;
    return to_string(b);
}

static string safe_filename(const string& name){
    string s = name;
    for (char& c : s) {
        if (c=='/' || c=='\\' || c=='|' || c=='?' || c=='*' || c=='"' || c=='<' || c=='>' || c==':')
            c = '_';
    }
    return s;
}

int main(int argc, char** argv){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool dryRun = false;
    for (int i=1;i<argc;i++){
        string a = argv[i];
        if (a=="--dry-run") dryRun = true;
    }

    // 1) Gather all .cpp files (except the tool itself and possibly 3rdparty dirs)
    vector<fs::path> files;
    for (auto& entry : fs::recursive_directory_iterator(fs::current_path())) {
        if (!entry.is_regular_file()) continue;
        auto p = entry.path();
        if (p.extension()==".cpp") {
            // Skip this tool if placed inside repo
            if (p.filename()=="cf_sorter.cpp") continue;
            files.push_back(p);
        }
    }
    if (files.empty()){
        cout << "No .cpp files found.\n";
        return 0;
    }

    struct Item {
        fs::path original;
        ProblemKey key;
        ProblemMeta meta;
        bool identified=false;
        bool haveMeta=false;
        string targetDir;
        fs::path targetPath;
    };

    vector<Item> items;
    items.reserve(files.size());

    // 2) Identify contestId/index from filename or source URL
    for (auto& p : files){
        Item it;
        it.original = p;
        ProblemKey k;
        if (parse_from_filename(p, k) || parse_from_source_url(p, k)){
            it.key = k;
            it.identified = true;
        } else {
            it.identified = false;
        }
        items.push_back(it);
    }

    // 3) Fetch CF problems API (once)
    // NOTE: This returns the full problemset (can be a few MB). We parse via regex "window".
    cout << "Fetching Codeforces problemset metadata...\n";
    string apiBlob = run_curl("https://codeforces.com/api/problemset.problems");
    if (apiBlob.empty()){
        cerr << "Warning: failed to fetch Codeforces API. Unrated fallback for all.\n";
    }

    // 4) For identified items, try to extract name+rating
    for (auto& it : items){
        if (!it.identified) continue;
        ProblemMeta meta;
        bool ok=false;
        if (!apiBlob.empty()){
            ok = extract_meta_from_api_blob(apiBlob, it.key, meta);
        }
        if (ok){
            it.meta = meta;
            it.haveMeta = true;
        } else {
            it.meta = ProblemMeta{"", -1};
            it.haveMeta = false;
        }
    }

    // 5) Compute targets
    // dir = rating bucket; filename = <contestId><index>.cpp
    // duplicate-safe
    unordered_map<string,int> dupCount;
    for (auto& it : items){
        string dirName = "unsorted";
        string baseName = it.original.filename().string(); // fallback

        if (it.identified){
            int rating = it.haveMeta ? it.meta.rating : -1;
            dirName = rating_bucket_dir(rating);
            baseName = to_string(it.key.contestId) + it.key.index + ".cpp";
        } else {
            // keep in "unsorted" with original name
        }

        it.targetDir = dirName;
        fs::path dstDir = fs::current_path() / dirName;

        // Ensure uniqueness
        fs::path dstFile = dstDir / baseName;
        if (fs::exists(dstFile)){
            // add __dupN before extension
            string stem = dstFile.stem().string();
            string ext  = dstFile.extension().string();
            int n = ++dupCount[dstFile.string()];
            dstFile = dstDir / (stem + "__dup" + to_string(n) + ext);
        }
        it.targetPath = dstFile;
    }

    // 6) Report plan
    cout << "\nPlan:\n";
    for (auto& it : items){
        cout << "- " << it.original.string() << "\n";
        if (it.identified){
            cout << "    -> " << it.targetPath.string()
                 << "  [" << it.targetDir << "]";
            if (it.haveMeta){
                cout << "  {" << it.meta.name << ", rating=" << it.meta.rating << "}";
            } else {
                cout << "  {meta: missing}";
            }
            cout << "\n";
        } else {
            cout << "    -> " << it.targetPath.string()
                 << "  [unsorted] {id/index unknown}\n";
        }
    }

    if (dryRun){
        cout << "\nDry-run: no changes made.\n";
        return 0;
    }

    // 7) Create directories and move files
    for (auto& it : items){
        fs::create_directories(it.targetPath.parent_path());
        // Move
        try{
            fs::rename(it.original, it.targetPath);
        } catch (...){
            // fallback: copy + remove
            fs::copy_file(it.original, it.targetPath, fs::copy_options::overwrite_existing);
            fs::remove(it.original);
        }
    }

    // 8) Rebuild README.md
    // Table: Problem ID, Name, Rating, Solution Link
    // We’ll sort rows by rating, then contestId, then index.
    struct Row {
        int rating;
        int contestId;
        string index;
        string name;
        string path;
    };
    vector<Row> rows;
    for (auto& it : items){
        if (!it.identified) continue;
        Row r;
        r.rating = it.haveMeta ? it.meta.rating : -1;
        r.contestId = it.key.contestId;
        r.index = it.key.index;
        r.name = it.haveMeta ? it.meta.name : "";
        // relative path
        fs::path rel = fs::relative(it.targetPath, fs::current_path());
        r.path = rel.generic_string();
        rows.push_back(r);
    }
    sort(rows.begin(), rows.end(), [](const Row& a, const Row& b){
        if (a.rating != b.rating) return a.rating > b.rating; // higher first
        if (a.contestId != b.contestId) return a.contestId < b.contestId;
        return a.index < b.index;
    });

    // Read existing README if exists (to preserve any custom intro). We’ll replace between markers.
    string existing;
    {
        ifstream fin("README.md");
        if (fin){
            stringstream ss; ss << fin.rdbuf();
            existing = ss.str();
        }
    }
    const string BEGIN_MARK = "<!-- CF_TABLE_BEGIN -->";
    const string END_MARK   = "<!-- CF_TABLE_END -->";
    string header = "# Codeforces Solutions\n\n"
                    "This repository contains my solutions to Codeforces problems, grouped by difficulty bucket (problem rating rounded down to the nearest hundred). "
                    "Unrated or unknown problems go to `unrated/`.\n\n";
    string table;
    table += "| Problem | Name | Rating | Solution |\n";
    table += "|---|---|---:|---|\n";
    for (auto& r : rows){
        string pid = to_string(r.contestId) + r.index;
        string showName = r.name.empty() ? "&mdash;" : r.name;
        string showRating = (r.rating<0) ? "&mdash;" : to_string(r.rating);
        table += "| " + pid + " | " + showName + " | " + showRating + " | [" + r.path + "](" + r.path + ") |\n";
    }
    string block = BEGIN_MARK + "\n" + table + END_MARK + "\n";

    string finalReadme;
    if (existing.empty()){
        finalReadme = header + block;
    } else {
        // replace or append
        size_t a = existing.find(BEGIN_MARK);
        size_t b = existing.find(END_MARK);
        if (a!=string::npos && b!=string::npos && b>a){
            string before = existing.substr(0, a);
            string after  = existing.substr(b + END_MARK.size());
            finalReadme = before + block + after;
        } else {
            finalReadme = existing + "\n\n" + block;
        }
    }
    {
        ofstream fout("README.md", ios::binary);
        fout << finalReadme;
    }

    cout << "\nDone. Files moved and README.md updated.\n";
    return 0;
}
