#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n,k,x;cin>>n>>k>>x;
    ll min,max;
    min=k*(k+1)/2;
    max=k*(2*n-k+1)/2;
    if(x<min || x>max) cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}