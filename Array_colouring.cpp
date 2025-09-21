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
        int cnt=0;
        vector <int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
            cnt+=num[i];
        }
        ((cnt%2==0)) ? cout<<"YES\n": cout<<"NO\n";
    }
    return 0;
}