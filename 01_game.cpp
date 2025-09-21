#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    string s;cin>>s;
    int cnt0=0,cnt1=0;
    for(char c:s) (c=='0') ? cnt0++:cnt1++;
    if(min(cnt0,cnt1)&1) cout<<"DA\n";
    else cout<<"NET\n";
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}