#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n,m;cin>>n>>m;
    vector <ll> a(n);
    for(auto &x: a) cin>>x;
    sort(a.begin(),a.end());
    ll mini=min(n,m),ans=0;
    ll i=n-1;
    while(mini--){
        ans+=a[i]*m;
        i--;
        m--;
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