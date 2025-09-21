#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;char c;
    cin>>n>>c;
    string s;cin>>s;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    int last=-1, ans=0;
    string t = s+s;
    for(int i=2*n-1; i>=0;i--){
        if(t[i]=='g') last = i; 
        if(t[i]==c && i<n && last!=-1) ans = max(ans, last-i);
    }
    cout <<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}