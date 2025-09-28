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
    while(t--){
        int n;cin>>n;
        ll minsec=LLONG_MAX,minmin=LLONG_MAX;
        ll sumsec=0;
        for(int i=0;i<n;i++){
            ll sec=LLONG_MAX,mn=LLONG_MAX;
            int m;cin>>m;
            for(int j=0;j<m;j++){
                ll a;cin>>a;
                if(a<mn){
                    sec=mn;
                    mn=a;
                }
                else if(a<sec) sec=a;
            }
            minmin=min(minmin,mn);
            minsec=min(minsec,sec);
            sumsec+=sec;
        }
        ll ans= sumsec-minsec+minmin;
        cout<<ans<<endl;
    }
    return 0;
}
