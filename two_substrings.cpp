#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    string s;cin>>s;
    int n=s.find("AB");
    if(n!=string::npos){
        if(s.find("BA",n+2)!=string::npos){
            cout<<"YES\n";
            return;
        }
    }
    int m=s.find("BA");
    if(m!=string::npos){
        if(s.find("AB",m+2)!=string::npos){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}