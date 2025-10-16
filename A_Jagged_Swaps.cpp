#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main(){  
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        (a[0]==1) ? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}