#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n,k;cin>>n>>k;
    vector <ll> slot(n);
    for(auto &x: slot) cin>>x;
    ll total=0;
    sort(slot.begin(),slot.end());
    slot.insert(slot.begin(),0);
    int x=0;
    for(int i=0;i<n;i++){
        total+=(slot[i+1]-slot[i])*(n-i);
        if(total>=k){
            x=i;
            break;
        }
    }
    cout<<k+x<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}