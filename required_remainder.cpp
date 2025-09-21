#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll x,y,n;cin>>x>>y>>n;
    ll a=n-(n%x)+y;
    if(a>n) cout<<a-x<<endl;
    else cout<<a<<endl;
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}