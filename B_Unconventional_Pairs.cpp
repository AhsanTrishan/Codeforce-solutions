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
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int best=0,diff=0;
        sort(a.begin(),a.end());
        for(int i=1;i<n;i+=2){
            diff= a[i]-a[i-1];
            best=max(best,diff);
        }
        cout<<best<<endl;
    }
    return 0;
}