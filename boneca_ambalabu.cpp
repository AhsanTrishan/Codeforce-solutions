#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  

void solve(){
    ll n;cin>>n;
    ll a[n+1];
    vector <ll> bitcount(30,0);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        for(ll j=0;j<30;j++){
            bitcount[j]+=((a[i]>>j)&1);
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll total=0;
        for(ll j=0;j<30;j++){
            bool ok=((a[i]>>j)&1);
            if(ok) total+= (1<<j)*(n-bitcount[j]);
            else total+= (1<<j)*bitcount[j];
        }
        ans=max(ans,total);
    }
    cout<<ans<<endl;
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}