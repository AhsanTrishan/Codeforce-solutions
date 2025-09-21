#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t; cin>>t;
    while (t--) {
        int n;cin>>n;
        vector<int> a(n),freq(n+1,0);
        for (int i=0;i<n; i++) cin >> a[i];
        for (int x :a) freq[x]++;
        vector<int> b;
        int mx = 0;
        for (int i=1; i<=n; i++) 
            if (freq[i]>0){
                b.push_back(freq[i]);
                mx = max(mx, freq[i]);
            }
        int ans=0;
        for (int i=1; i<=mx; i++){
            int cnt=0;
            for(int j=0;j<b.size();j++){
                if(b[j]>=i) cnt++;
            }
            ans=max(ans,i*cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}
