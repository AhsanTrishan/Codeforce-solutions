#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    unordered_map <string,int> name(t);
    for(int i=0; i<t; i++){
        string s;cin>>s;
        if(name[s]==0) cout<<"OK\n";
        else cout<<s<<name[s]<<'\n';

        name[s]++;
    }
    return 0;
}