#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];

    vector <vector<int>> pos(n+1);
    for(int i=1;i<=n;i++)  if(a[i]<=n) pos[a[i]].push_back(i);
    
    vector <tuple<int,int,int>> ev;
    for(int v=1;v<=n;v++){
        const auto &p=pos[v];
        int m=p.size();
        for(int j=v-1;j<m;j++){
            int end=p[j];
            int start=p[j-(v-1)];
            ev.emplace_back(end,start,v);
        }
    }
    sort(ev.begin(),ev.end());

    vector <int> dp(n+1,0);
    int k=0, m=(int)ev.size();
    for(int i=1;i<=n;i++){
        dp[i]=dp[i-1];
        while(k<m && get<0>(ev[k])==i){
            int start=get<1>(ev[k]);
            int v=get<2>(ev[k]);
            dp[i]=max(dp[i], dp[start-1]+v);
            k++;
        }
    }
    cout<<dp[n]<<endl;
}
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
