#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll x= k*k;
        bool pair= (n&1 && k&1) || (n%2==0 && k%2==0);
        if(n>=x && pair) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}