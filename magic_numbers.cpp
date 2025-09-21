#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    string s;cin>>s;
    int x=s.length();
    for(int i=0;i<x;){
        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4') i+=3;
        else if(s[i]=='1'&&s[i+1]=='4') i+=2;
        else if(s[i]=='1') i++;
        else{
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}