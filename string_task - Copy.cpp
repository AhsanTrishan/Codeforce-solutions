#include <bits/stdc++.h>
using namespace std;
int main() {
    string name; cin >> name;
    set<char> vowels = {'a','o','y','e','u','i'};
    string result;
    for(char c : name) {
        c = tolower(c);
        if (vowels.count(c) == 0) {
            result.push_back('.');
            result.push_back(c);
        }
    }
    cout << result << "\n";
    return 0;
}