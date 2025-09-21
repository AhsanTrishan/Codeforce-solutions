#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t;cin>>t;
    while (t--){
        int n,k;cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
         if (k==1){
            bool ok = true;
            for(int i=1;i<n;i++) {
                if(a[i]<a[i-1]) {
                    ok = false;
                    break;
                }
            }
            cout<<(ok ? "YES\n" : "NO\n");
        }
        else cout <<"YES\n";
    }
    return 0;
}