#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    char c; cin>>c;
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s;cin>>s;

    for(int i=0; i<s.length(); i++){
        if(c=='R') {
            int x=keyboard.find(s[i]);
            s[i]=keyboard[x-1];
        }
        if(c=='L') {
            int y=keyboard.find(s[i]);
            s[i]=keyboard[y+1];
        }
    }
    cout<<s<<endl;
    return 0;
}