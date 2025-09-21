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
        string s;cin>>s;
        cout<<s[0]<<s[1];
        for(int i=3;i<s.length();i++){
            if(i%2!=0) cout<<s[i];
        }
        cout<<'\n';
    }
    return 0;
}