#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    int a=0,b=0,c=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=i;
            n/=i;
            break;
        }
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0 && i!=a && (n/i)!=a){
            b=i;
            c=n/i;
            break;
        }
    }
    if(a!=0&&b!=0&&c>1&&a!=b&&b!=c&&c!=a) cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
    else cout<<"NO\n";

    }
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}