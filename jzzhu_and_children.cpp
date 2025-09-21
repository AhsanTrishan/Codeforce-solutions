#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,m;cin>>n>>m;
    vector <int> child(n);
    int best=0,ind=-1;
    for(int i=0;i<n;i++) {
        cin>>child[i];
        ll turns=((child[i]+m-1)/m);
        if(turns>=best){
            best=turns;
            ind=i+1;
        }
    }
    cout<<ind<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}