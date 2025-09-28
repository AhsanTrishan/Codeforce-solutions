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
        int n;cin>>n;
        vector <int> a(n);
        int cntneg=0,cntzero=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<0) cntneg++;
            if(a[i]==0) cntzero++;
        }
        if(cntneg&1){
            int ans=cntzero+2;
            cout<<ans<<endl;
        }
        else cout<<cntzero<<endl;
    }
    return 0;
}