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
        bool ok=true;int cnt=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=n-2;i>=0;i--){
            while(a[i]>=a[i+1] &&a[i]>0) {
                a[i]/=2;
                cnt++;
            }
            if(a[i]==a[i+1]){
                ok=false;
                break;
            } 
        }
        if(ok) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}