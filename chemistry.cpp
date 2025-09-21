#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int odd=0;
    vector <int> alphabet(26,0);
    for(char c: s) alphabet[c-'a']++;
    for(int x:alphabet) if(x%2==1) odd++;
    bool ok=true;
    if((n-k)%2==0) ok=(odd<=k);
    else ok=(odd<=k+1);
    (ok)? cout<<"YES\n" : cout<<"NO\n";
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}