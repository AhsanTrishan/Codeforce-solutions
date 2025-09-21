#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,a,b;cin>>n>>a>>b;
    cout<<(((a<=b||(a-b)%2==0) && (n%2==b%2)) ? "YES\n":"NO\n");
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}