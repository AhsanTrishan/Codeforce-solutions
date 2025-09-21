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
        for(int k=2; k<=30; k++){
            int sum=(1<<k); //basically ikhano 2^k korram arki
            if(n%(sum-1)==0) {
                cout<<n/(sum-1)<<endl;
                break;
            }
        }
    }
    return 0;
}