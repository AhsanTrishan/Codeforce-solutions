#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,k;cin>>n>>k;
    vector<ll> a(n+1),b(n+1),prefA(n+1),prefB(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++) {
        prefA[i]=prefA[i-1]+a[i];
        prefB[i]=max(prefB[i-1],b[i]);//counting the best value of b up until the level imma use
    }
    int p=min(n,k);
    ll ans=0;
    for(int i=1;i<=p;i++){
        int turn=k-i;
        ll total= prefA[i]+ (prefB[i]*turn);// unlocking + xp gain with best B
        ans=max(ans,total);
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