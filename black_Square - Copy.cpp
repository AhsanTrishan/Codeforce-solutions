#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    string s;cin>>s;
    int cost=0;
    for(char ch: s){
        if(ch=='1') cost+=a;
        if(ch=='2') cost+=b;
        if(ch=='3') cost+=c;
        if(ch=='4') cost+=d;
    }
    cout<<cost<<endl;
}

int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}