#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int cnt0=0,cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    cout<<n-(min(cnt0,cnt1)*2)<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}