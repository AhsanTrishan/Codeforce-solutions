#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    string s;
    int l=n/2;
    int r=l-1;
    if(n==1){
        cout<<"a\n";
        return;
    }
    s.append(l,'a');
    if(n&1) s+="bc";
    else s+='b';
    s.append(r,'a');
    cout<<s<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}