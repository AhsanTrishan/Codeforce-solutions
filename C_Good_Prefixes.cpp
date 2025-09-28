#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector <ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll sum=0,mx=0,best=0;
        for(ll i=0;i<n;i++){
            sum+=a[i];
            mx=max(mx,a[i]);
            if(sum-mx==mx) best++;
        }
        cout<<best<<endl;
    }
    return 0;
}