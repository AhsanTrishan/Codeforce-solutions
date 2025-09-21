#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <ll> a(n),odd;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        sum+=x;
        if(x&1) odd.push_back(x);
    }
    if(odd.size()<1){
        cout<<0<<endl;
        return;
    }
    int sacr=odd.size()/2;
    sort(odd.begin(),odd.end());
    for(int i=0;i<sacr;i++) sum-=odd[i];
    cout<<sum<<endl;
}   
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}