#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string name;cin>>name;
        int length = name.length();
        if(length>10) cout<<name[0]<<length-2<<name[length-1]<<'\n';
        else cout<<name<<'\n';
    }
    return 0;
}