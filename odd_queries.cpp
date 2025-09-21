#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n,q;cin>>n>>q;
    vector <ll> pref(n+1,0),a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }
    ll sum=pref[n];
    while(q--){
        ll l,r,k;cin>>l>>r>>k;
        ll segsum=pref[r]-pref[l-1];
        ll len= r-l+1;
        ll s= sum-segsum+(len*k);
        if(s&1LL) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}