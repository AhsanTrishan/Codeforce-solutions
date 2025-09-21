#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,k;cin>>n>>k;
    vector<int>x(n);
    for(auto &a:x) cin>>a;
    sort(x.begin(),x.end());
    int ans,cnt=0;
    if(k!=0) ans=x[k-1];
    else ans=x[0]-1;
    for(auto &a:x){
        if(a<=ans) cnt++;
    }
    if(cnt>k || ans<1) cout<<-1<<endl;
    else cout<<ans<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}