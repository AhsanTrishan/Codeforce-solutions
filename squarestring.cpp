#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    string s;cin>>s;
    int n=s.size();
    if(n&1) cout<<"NO\n";
    else{
        if(s.substr(0,n/2)==s.substr(n/2,n/2)) cout<<"YES\n";
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