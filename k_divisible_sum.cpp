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
        if(n%k==0) cout<<1<<endl;
        else if(k%n==0) cout<<k/n<<endl;
        else if(k>n) cout<<k/n+1<<endl;
        else if(n>k) cout<<2<<endl;
    }
    return 0;
}