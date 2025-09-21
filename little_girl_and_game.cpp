#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    string s;cin>>s;
    map<char,int> occ;
    int oddcnt=0;
    for(char ch:s) occ[ch]++;
    for(auto &x:occ) if(x.second&1) oddcnt++;

    if(oddcnt%2==1||oddcnt==0) cout<<"First\n";
    else cout<<"Second\n";

}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}