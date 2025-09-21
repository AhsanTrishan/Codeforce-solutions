#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll x,y,z;cin>>x>>y>>z;
    ll xyz= sqrt(x*y*z);
    ll a= xyz/y, b=xyz/z, c=xyz/x;
    ll ans= 4*(a+b+c);
    cout<<ans<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}