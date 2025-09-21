#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
ll smallest_div(ll n){
    if(n%2==0) return 2;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return i;
    }
    return n;
}
void solve(){
    ll n;cin>>n;
    if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
    else{
        ll p= smallest_div(n);
        ll k= n/p;
        cout<<k<<" "<<(n-k)<<endl;
    }
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}