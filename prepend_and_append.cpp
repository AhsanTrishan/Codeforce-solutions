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
    int l=0,r=n-1;
    int cnt=0;
    while(l<r){
        if((s[l]=='0'&&s[r]=='1')||(s[l]=='1'&&s[r]=='0')){
            cnt+=2;
            l++;
            r--;
        }
        else break;
    }
    cout<<n-cnt<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}