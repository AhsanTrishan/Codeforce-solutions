#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    vector <string>a(8);
    for(int i=0;i<8;i++) cin>>a[i];
    for(int i=0;i<8;i++){
        if(a[i]==string(8,'R')){
            cout<<"R\n";
            return;
        }
    }
    cout<<"B\n";

}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}