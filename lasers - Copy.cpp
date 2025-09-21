#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,m,x,y;cin>>n>>m>>x>>y;
    vector <int> a(n),b(m);
    for(auto &v:a) cin>>v;
    for(auto &v:b) cin>>v;
    cout<<n+m<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}