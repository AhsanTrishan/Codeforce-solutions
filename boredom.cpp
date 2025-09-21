#include <bits/stdc++.h>
#define ll long long
using namespace std;

void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
} 

int main(){
    allahbhalojanen();
    ll maxi=0,n;cin>>n;
    vector <ll> dp(100005,0);
    vector <ll> dp2(100005);

    for(int i=0; i<n; i++){
        ll x;cin>>x;
        dp[x]++;
        maxi=max(x,maxi);
    }
    dp2[0]=dp[0];
    dp2[1]=dp[1];

    for(ll i=2; i<=100000; i++){
        dp2[i]= max(dp2[i-2]+i*dp[i], dp2[i-1]);
    }
    cout<<dp2[100000]<<endl;
    return 0;
}