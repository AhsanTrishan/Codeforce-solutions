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
        ll n,k;cin>>n>>k;
        vector <ll> a(n);
        ll evencount=0,ans=INT_MAX;
        for(ll i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]%2==0) evencount++;
            if(a[i]%k==0) ans=0;
            ans=min(ans,(k-(a[i]%k)));
        }
        if(k==4){
            if(evencount>=2) ans=min(ans,0LL);
            else if(evencount==1) ans=min(ans,1LL);
            else ans=min(ans,2LL);
        }
        cout<<ans<<endl;
    }
    return 0;
}
    