#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n;cin>>n;
    vector <int> posa(n+1);
    for(ll i=1;i<=n;i++) {
        ll x;cin>>x;
        posa[x]=i;
    }
    ll m;cin>>m;
    ll cnta=0,cntb=0;
    for(ll i=1;i<m;i++){
        ll x;cin>>x;
        cnta+=posa[x];
        cntb+=(n-posa[x]+1);
    }
    cout<<cnta<<" "<<cntb<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}