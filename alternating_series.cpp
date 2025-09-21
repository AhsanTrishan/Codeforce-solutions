#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t;cin>>t;
    while (t--){
        int n;cin>>n;
        vector<int> a;
        if(n==2) {
            a.push_back(-1);
            a.push_back(2);
        } 
        else if(n%2== 1) {
            for(int i=0; i<n; i++) {
                if(i%2== 0) a.push_back(-1);
                else a.push_back(3);
            }
        } 
        else {
            for(int i=0; i<n-2; i++) {
                if(i%2 == 0) a.push_back(-1);
                else a.push_back(3);
            }
            a.push_back(-1);
            a.push_back(2);
        }
        for(int i=0;i<n;i++) {
            if(i==n-1) cout<<a[i]<<'\n';
            else cout<<a[i]<<" ";
        }
    }
    return 0;
}