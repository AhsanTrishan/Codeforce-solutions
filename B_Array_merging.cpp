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
        ll n;cin>>n;
        vector <ll> a(n),b(n),longsuba(2*n +1,0),longsubb(2*n+1,0);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        
        ll cnt=1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]) cnt++;
            else{
                longsuba[a[i-1]]=max(longsuba[a[i-1]],cnt);
                cnt=1;
            }
        }
        longsuba[a[n-1]]=max(longsuba[a[n-1]],cnt);
        cnt=1;
        for(int i=1;i<n;i++){
            if(b[i]==b[i-1]) cnt++;
            else{
                longsubb[b[i-1]]=max(longsubb[b[i-1]],cnt);
                cnt=1;
            }
        }
        longsubb[b[n-1]]=max(longsubb[b[n-1]],cnt);
        
        ll freq=-1;
        for(int i=1; i<=2*n;i++){
            freq = max(freq, longsuba[i] + longsubb[i]);
        }
        cout<<freq<<endl;
    }
    return 0;
}
    