#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        ll n,p;cin>>n>>p;
        vector <pair<ll,ll>> v(n);
        vector <ll> a(n),b(n);
        for(ll i=0;i<n;i++)  cin>>a[i];
        for(ll i=0;i<n;i++)  cin>>b[i];
        for(ll i=0;i<n;i++)  v[i]={b[i],a[i]};
        sort(v.begin(),v.end());
        ll mincost=p;
        ll already_shared=1;
        for(auto x: v){
            ll can_be_shared= x.second;
            ll cost= x.first;
            if(cost>=p) break;
            if(already_shared+can_be_shared>n){
                mincost+= (n-already_shared) * cost;
                already_shared=n;
                break;
            }
            else{
                mincost+= can_be_shared*cost;
                already_shared+=can_be_shared;
            }
        }
        mincost+=(n-already_shared)*p;
        cout<<mincost<<endl;
    }
    return 0;
}
    