#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    const int shajalalerdeg= 1e9+7;
    string s;cin>>s;
    ll len=s.length();
    if(s.find("w")!=string::npos || s.find("m")!=string::npos){
        cout<<"0"<<endl;
        return;
    }

    vector <ll> dp(len+1,0);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=len;i++){
        dp[i]=dp[i-1];
        if(s[i-1]==s[i-2] &&(s[i-2]=='u'||s[i-2]=='n')){
            dp[i]=(dp[i]+dp[i-2])%shajalalerdeg;
        }
    }
    cout<<dp[len]%shajalalerdeg;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}