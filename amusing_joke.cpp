#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    string name,host,pile;
    cin>>name>>host>>pile;
    string a=name+host;
    sort(a.begin(),a.end());
    sort(pile.begin(),pile.end());
    if(pile==a) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}