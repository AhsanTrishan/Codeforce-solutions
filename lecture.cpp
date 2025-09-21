#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,k;cin>>n>>k;
    map<string,string> mp;
    for(int i=0;i<k;i++){
        string a,b;cin>>a>>b;
        mp[a]=(a.length()>b.length()) ?  b:a;
    }
    for(int i=0;i<n;i++){
        string x;cin>>x;
        cout<<mp[x]<<" ";
    }
    cout<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}