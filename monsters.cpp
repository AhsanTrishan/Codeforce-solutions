#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,k;cin>>n>>k;
    vector <pair<int,int>> monsters;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        int val= (a%k==0) ? k:a%k;
        monsters.push_back({-val,i+1});
    }
    sort(monsters.begin(),monsters.end());
    for(auto &x:monsters) cout<<x.second<<" ";
    cout<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}