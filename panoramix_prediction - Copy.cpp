#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int n,k;cin>>n>>k;
    int x=n+1;
    while(!isprime(x)) x++;
    (x==k)? cout<<"YES\n" : cout<<"NO\n";
}

int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}