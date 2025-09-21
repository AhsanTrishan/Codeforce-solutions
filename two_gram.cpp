#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    string s;cin>>s;
    string ans="";
    int cnt=0,bestcnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(s[j]==s[i] && s[j+1]==s[i+1]) cnt++;
        }
        if(cnt>bestcnt){
            bestcnt=cnt;
            ans=s.substr(i,2);
        }
        cnt=0;
    }
    cout<<ans<<endl;
    return 0;
}