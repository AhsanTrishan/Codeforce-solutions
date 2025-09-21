#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,m;cin>>n>>m;
    if(n==m) cout<<0<<endl;
    else if(n%m==0||m%n==0) cout<<1<<endl;
    else cout<<2<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}