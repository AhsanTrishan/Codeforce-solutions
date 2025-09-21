#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map <char,int> actual={{'m',1},{'T',1},{'i',1},{'u',1},{'r',1}};
    map <char,int> fake;
    for(char ch:s) fake[ch]++;
    cout<<((actual==fake)?"YES\n":"NO\n");
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}