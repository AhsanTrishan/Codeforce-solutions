#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <int> v(n);
    for(auto &x: v) cin>>x;
    
    int dif=v[1]-v[0];
    bool bad=false;
    for(int i=2;i<n;i++) if(dif != v[i]-v[i-1]) bad=true;
    
    if(bad){
        cout<<"NO\n";
        return;
    }

    for(int i=0; i<n; i++) v[i]=v[i]+ ((dif<0)? dif*(n-i): -dif*(i+1));

    cout<<((v[0] >= 0 && v[0]%(n+1) == 0) ? "YES\n":"NO\n");
}

int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--) solve();
    return 0;
}