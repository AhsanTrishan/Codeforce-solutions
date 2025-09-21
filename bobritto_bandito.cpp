#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,m,l,r;cin>>n>>m>>l>>r;
    if(m<=r) cout<<0<<" "<<m<<endl;
    else cout<<r-m<<" "<<r<<endl;
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}