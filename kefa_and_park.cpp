#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  

int n,m;
vector <int> hasBilai;
vector<vector<int>> adj;
int ans=0;

void solve(int u,int parent,int consecutive){
    if(hasBilai[u]) consecutive++;
    else consecutive=0;
    if(consecutive>m) return;

    bool restura_faisi=true;

    for(int v: adj[u]){
        if(v==parent) continue;
        restura_faisi=false;
        solve(v,u,consecutive);
    }
    if(restura_faisi) ans++;
}

int main(){
    allahbhalojanen();
    cin>>n>>m;
    hasBilai.resize(n+1);
    adj.resize(n+1);

    for(int i=1;i<=n;i++) cin>>hasBilai[i];

    for(int i=0;i<n-1;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    solve(1,-1,0);
    cout<<ans<<endl;
    return 0;
}