#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,v,l;cin>>n>>v>>l;
    while(n>0 && v>0 && (n/2)+10<n){
        v--;
        n=(n/2)+10;
    }
    if(n-(l*10)<=0) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}