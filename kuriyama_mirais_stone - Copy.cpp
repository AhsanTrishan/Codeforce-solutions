#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <ll> stone(n+1),prefa(n+1,0),prefb(n+1,0);
    for(int i=1;i<=n;i++) cin>>stone[i];
    for(int i=1;i<=n;i++) prefa[i]=prefa[i-1]+stone[i];
    vector <ll> sstone=stone;
    sort(sstone.begin(),sstone.end());
    for(int i=1;i<=n;i++) prefb[i]=prefb[i-1]+sstone[i];
    int m;cin>>m;
    while(m--){
        int x;cin>>x;
        int l,r;cin>>l>>r;
        if(x==1) cout<<prefa[r]-prefa[l-1]<<endl;
        if(x==2) cout<<prefb[r]-prefb[l-1]<<endl;
    }
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}