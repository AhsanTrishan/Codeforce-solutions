#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    string s;cin>>s;
    int balance=0;
    for(char ch:s){
        if(ch=='(') balance++;
        else if(ch==')') balance--;
        if(balance<0){
            cout<<"NO\n";
            return;
        }
    }
    (balance==0)?cout<<"YES\n":cout<<"NO\n";
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}