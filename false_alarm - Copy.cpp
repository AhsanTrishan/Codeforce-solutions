#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int first=0,last=0,n,k;cin>>n>>k;
    vector <int> door(n);
    for(int i=0;i<n;i++) cin>>door[i];
    for(int i=0;i<n;i++){
        if(door[i]==1){
            first=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(door[i]==1){
            last=i;
        }
    }
    if(k>=last-first+1) cout<<"YES\n";
    else cout<<"NO\n";
    }
    return 0;
}