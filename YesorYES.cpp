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
        for(char &c: s) c=tolower(c);
        if(s=="yes") cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}