#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    if(n%4!=0) {
        cout<<"NO\n";
        return;
    }
    else{
        cout<<"YES\n";
        int half=n/2;
        for(int i=1;i<=half;i++) cout<<2*i<<" ";
        for(int i=1;i<half;i++) cout<<(2*i)-1<<" ";
        cout<<(3*half)-1<<endl; //sum of even - sum of odds(basically last element jekta both side equal korbo)
    }
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}