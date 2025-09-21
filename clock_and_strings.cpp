#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    string ans="";
    for(int i=1;i<=12;i++){
        if(i==a||i==b) ans+='R';
        else if(i==c||i==d) ans+='B';
    }
    if(ans.find("BB")!=string::npos || ans.find("RR")!=string::npos) cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}