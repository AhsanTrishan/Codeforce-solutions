#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve()
{
    ll n,g=0;cin>>n;
    for (ll i=0;i<n;i++){
        ll x;cin>>x;
        g=__gcd(g,x);
    }
    int ans=0;
    for(ll i=1;i*i<=g;i++){
        if(g%i==0) {
            ans++;
            if(i*i!=g) ans++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    allahbhalojanen();
    // ll t;cin>>t;
    // while(t--)
    solve();
    return 0;
}