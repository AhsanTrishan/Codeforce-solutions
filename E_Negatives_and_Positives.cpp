#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    ll sum=0,sign=0,mn=LLONG_MAX;
    for(int i=0;i<n;i++) {
        ll x;cin>>x;
        if(x<0)sign++;
        sum+=abs(x);
        mn=min(mn,abs(x));
    }
    if(sign%2==0) cout<<sum<<endl;
    else cout<<sum-(2*mn)<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}