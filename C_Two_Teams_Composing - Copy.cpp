#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int dupe=0,n;cin>>n;
    vector <int> a(n);
    for(auto &x: a) cin>>x;
    unordered_map <int,int> cnt;
    for(int x: a){
        dupe=max(dupe,++cnt[x]);
    }
    int unique= (int)cnt.size();
    int ans= max(min(unique-1,dupe),min(unique,dupe-1));
    cout<<ans<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}