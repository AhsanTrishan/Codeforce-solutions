#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <int> pos(n+1);
    for(int i=1; i<=n;i++){
        int x;cin>>x;
        pos[x]=i;
    }
    int l=pos[n],r=pos[n];
    for(int i=n-1;i>=1;i--){
        if(pos[i]==l-1) l--;
        else if(pos[i]==r+1) r++;
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}