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
        int n,sum=0;cin>>n;
        vector <int> num(n);
        for(int i=0;i<n;i++){
            cin>>num[i];
            if(num[i]==0) sum++;
            else sum+=num[i];
        }
        cout<<sum<<'\n';
    }
    return 0;
}