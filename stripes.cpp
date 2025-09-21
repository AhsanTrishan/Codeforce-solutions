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
    bool rowR=false;
    for(int i=0;i<8;i++){
        bool allR=true;
        for(int j=0;j<8;j++){
            if(a[i][j]!='R'){
                allR=false;
                break;
            }
        }
        if(allR){
            rowR=true;
            break;
        }
    }
    if(rowR) cout<<"R\n";
    else cout<<"B\n";

}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}