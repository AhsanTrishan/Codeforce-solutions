#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;ll h;cin>>n>>h;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    auto check = [&](ll k){
        ll dmg = k;
        for (int i=0;i<n-1;i++) {
            dmg += min(k, a[i+1]-a[i]);
            if (dmg >= h) return true;
        }
        return dmg >= h;
    };
    ll l=1, r=h, ans=h;
    while (l<=r) {
    ll mid = (l+r)/2;
        if (check(mid)) {
            ans = mid;
            r = mid-1;
        } 
        else l=mid + 1;      
    }
    cout <<ans<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}