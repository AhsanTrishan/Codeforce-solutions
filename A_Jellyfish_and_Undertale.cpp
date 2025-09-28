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
        ll a,b,n;cin>>a>>b>>n;
        vector <ll> x(n);
        ll cnt=0;
        for(int i=0;i<n;i++) {
            cin>>x[i];
            cnt+=min(a-1,x[i]);
        }
        cout<<cnt+b<<endl;
    }
    return 0;
}
