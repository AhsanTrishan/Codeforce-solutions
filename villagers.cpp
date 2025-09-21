#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
ll solve(vector <ll>& grump,ll s,ll n){
    sort(grump.begin(),grump.end());
    ll sum=0;
    while(s<n){
        sum+=grump[s];
        s+=2;
    }
    return sum;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--){
        ll n,s;cin>>n;
        if(n%2==0) s=1;
        else s=0;
        vector <ll> a(n);
        for(auto &x: a) cin>>x;
        ll x=solve(a,s,n);
        cout<<x<<endl;
    }
    return 0;
}