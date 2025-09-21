#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,cnt=0;cin>>n;
    string s;cin>>s;
    s='0'+s;
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]) cnt++;
    }
    if(cnt>=3) cout<<n+cnt-2<<endl;
    else if(cnt==2) cout<<n+cnt-1<<endl;
    else cout<<n+cnt<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}