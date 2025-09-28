#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t; cin>>t;
    while (t--) {
        string s;cin>>s;
        int ans=s[0]+s[2]-(2*'0');
        cout<<ans<<endl;
    }
    return 0;
}
