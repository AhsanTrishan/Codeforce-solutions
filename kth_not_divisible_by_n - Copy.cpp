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
        long long n,k;cin>>n>>k;
        long long skipped= (k-1)/(n-1);
        cout<<k+skipped<<endl;
    }
    return 0;
}