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
        int n,k;cin>>n>>k;
        int cnt=0;
        vector <int> num(n);
        for(int i=0;i<n;i++) {
            cin>>num[i];
            if(num[i]==k) cnt++;
        }
        (cnt>0) ? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}