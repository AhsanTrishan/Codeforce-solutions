#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}   
void solve(){
    int x,y,a,b,cost=0;cin>>x>>y>>a>>b;
    bool cheaper;
    if(2*a>=b) cheaper=true;
    int mini=min(x,y);
    int mx=max(x,y);
    if(cheaper){
        cost= mini*b+ (mx-mini)*a;
        cout<<cost<<endl;
    }
    else{
        cost=(x+y)*a;
        cout<<cost<<endl;
    }
} 
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while (t--) solve();
    return 0;
}