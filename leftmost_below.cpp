#include <bits/stdc++.h>
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
        vector <int> num(n);
        for(int i=0;i<n;i++) cin>>num[i];
        bool ok=true;
        int mini=num[0];
        for(int i=1;i<n;i++){
            if(num[i]>=2*mini){//karon b_i strictly 2*minimum thaki chuto howa lagbo
                ok=false;
                break;
            }
            mini=min(mini,num[i]);
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}