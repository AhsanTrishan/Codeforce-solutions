#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
bool split(int n,int m){
    if(n==m) return true;
    if(n<m||n%3) return false;
    return (split(n/3,m)||split((2*n)/3,m));
}
void solve(){
    int n,m;cin>>n>>m;
    cout<<(split(n,m) ? "YES\n":"NO\n"); 
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}