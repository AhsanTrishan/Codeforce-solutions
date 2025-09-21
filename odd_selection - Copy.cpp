#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,x;cin>>n>>x;
    int odd_count=0,even_count=0;
    vector <int> segs(n);
    for(int i=0;i<n;i++){
        cin>>segs[i];
        if(segs[i]&1) odd_count++;
        else even_count++;
    }
    int ok=0;
    for(int i=1;i<=min(odd_count,x);i+=2){
        if(x-i<=even_count){
            ok=1;
            break;
        }
    }
    (ok)?cout<<"Yes\n":cout<<"No\n";

}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}