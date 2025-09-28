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
        int k,n;cin>>k>>n;
        vector <int> a(n);
        bool ok =true;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(i!=0 && a[i]==1){
                ok=false;
            }
        }
        if(ok) cout<<k-a[n-1]+1<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
    