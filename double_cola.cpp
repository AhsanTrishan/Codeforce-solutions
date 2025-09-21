#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n;cin>>n;
    vector <string> name={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    ll block=1;
    while(n>5*block){
        n-=5*block;
        block*=2;
    }
    int ind=(n-1)/block;
    cout<<name[ind]<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}