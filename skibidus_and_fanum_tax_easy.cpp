#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,m;cin>>n>>m;
    vector <int> a(n);
    for(auto &x: a) cin>>x;
    int b1;cin>>b1;

    int ager_index=min(a[0],b1-a[0]);

    for(int i=1;i<n;i++){
        int x= min(a[i], b1-a[i]);
        int y= max(a[i], b1-a[i]);

        if(x>=ager_index) ager_index=x;
        else if(y>=ager_index) ager_index=y;
        else {
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