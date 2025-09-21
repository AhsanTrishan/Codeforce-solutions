#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int x;cin>>x;
    string a;cin>>a;
    int y;cin>>y;
    string b;cin>>b;
    string priority;cin>>priority;
    for(int i=0;i<y;i++){
        if(priority[i]=='D') a.push_back(b[i]);
    
        if(priority[i]=='V') a.insert(a.begin()+0, b[i]);
    }
    cout<<a<<endl;
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}