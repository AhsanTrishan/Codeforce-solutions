#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());

    int cur=0;
    for(int i=0;i<n;i++){
        int a=v[i].first;
        int b=v[i].second;
        if(b>=cur) cur=b;
        else cur=a;
    }
    cout<<cur<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    // while(t--) 
    solve();
    return 0;
}