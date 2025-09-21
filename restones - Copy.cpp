#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    vector<int> gear(n);
    for (auto &x: gear) cin>>x;
    sort(gear.begin(), gear.end());
    bool ok = false;
    for (int i=1; i<n; i++) {
        if (gear[i]==gear[i-1]) ok=true;
    }
    cout << (ok ? "YES\n" : "NO\n");
}

int main(){
    allahbhalojanen();
    int t; cin>>t;
    while(t--) solve();
}
