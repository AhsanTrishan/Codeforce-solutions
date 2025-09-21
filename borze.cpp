#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    string s="";
    string x;cin>>x;
    for(int i=0;i<x.length();){
        if(x[i]=='.') {
            s.push_back('0');
            i++;
        }
        if(x[i]=='-' && x[i+1]=='.') {
            s.push_back('1');
            i+=2;
        }
        if(x[i]=='-' && x[i+1]=='-') {
            s.push_back('2');
            i+=2;
        }
    }
    cout<<s<<'\n';
    return 0;
}