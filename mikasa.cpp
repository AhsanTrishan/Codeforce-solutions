#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n,m; cin>>n>>m;
    ll ans=0;m++;
    for(int i=30;i>=0 && n<m;i--){
        int bitn=(n>>i)&1;
        int bitm=(m>>i)&1;
        if(bitn==bitm) continue;
        if(bitn==0 && bitm==1) {
            ans |= (1ll<<i);
            n |= (1ll<<i);
        }
    }
    cout<<ans<<endl;
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}