#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n,k;cin>>n>>k;
    ll ans=n;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i<=k) ans=min(ans,i);
            if(i<=k) ans=min(ans,n/i);
        }
    }
    cout<<ans<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}