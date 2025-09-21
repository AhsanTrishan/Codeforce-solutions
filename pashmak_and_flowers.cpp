#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n;cin>>n;
    vector <ll> flower(n);
    for(auto &x:flower) cin>>x;
    ll mx=*max_element(flower.begin(),flower.end());
    ll mn=*min_element(flower.begin(),flower.end());
    ll cnt1=count(flower.begin(),flower.end(),mx);
    ll cnt2=count(flower.begin(),flower.end(),mn);
    if(mx==mn) cout<<mx-mn<<" "<<n*(n-1)/2<<endl;
    else cout<<mx-mn<<" "<<cnt1*cnt2<<endl;
}   
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}