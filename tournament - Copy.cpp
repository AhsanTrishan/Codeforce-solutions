#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--) {
        int n,j,k;cin>>n>>j>>k;
        vector <int> power(n);
        for(int i=0;i<n;i++) cin>>power[i];
        int jp=power[j-1];
        sort(power.begin(),power.end(), greater<int>());
        int first=power[0];
        if(jp !=first && k==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}