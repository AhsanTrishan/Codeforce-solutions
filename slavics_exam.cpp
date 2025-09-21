#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int count=0;
        string s,t;cin>>s>>t;
        for(int i=0,j=0;i<t.length();i++,j++){
            if(t[i]==s[j] || s[j]=='?'){
                count++;
            }   
        }
        if(count<t.length()) cout<<"NO\n";
        else{
            for(char c: t){
                if(c=='?')
            }
        }
    }
    return 0;
}