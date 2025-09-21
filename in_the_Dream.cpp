#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int sa=c-a,sb=d-b;
    int maxi=max(a,b),maxii=max(sa,sb),mini=min(a,b),minii=min(sa,sb);
    cout<<((maxi<=2*(mini+1) && maxii<=2*(minii+1)) ? "YES\n":"NO\n");
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}