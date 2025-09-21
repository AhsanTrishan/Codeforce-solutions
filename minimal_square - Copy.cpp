#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int a,b;cin>>a>>b;
    int x=min(a,b)*2;
    int y=max(a,b);
    cout<<(((x<y) ? y*y : x*x))<<endl;
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}