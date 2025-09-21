#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,k;cin>>n>>k;
    for(int i=1;i<11;i++){
        if((i*n)%10==k || (i*n)%10==0) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}