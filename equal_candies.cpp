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
        int mini=INT_MAX,sum=0;
        for(int i=0;i<n;i++) {
            cin>>num[i];
            mini=min(mini,num[i]);
        }
        for(int i:num){
            if(i!=mini){
                sum+= i-mini;
            }
        }
        cout<<sum<<endl; 
    }
    return 0;
}