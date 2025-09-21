#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t; cin >> t;
    while (t--) {
        int n; long long c; cin>>n>>c;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        long long coins = 0;int k = 0;
        while (!a.empty()) {
            long long x = (k<63 ? (c>>k) : 0LL);
            auto y = upper_bound(a.begin(), a.end(), x);
            if (y != a.begin()) a.erase(prev(y));
            else {
                coins++;
                a.pop_back();
            }
            k++;
        }
        cout << coins << "\n";
    }
    return 0;
}
