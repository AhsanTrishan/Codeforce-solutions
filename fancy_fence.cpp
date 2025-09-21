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
        int a;cin>>a;
        if((360%(180-a))==0 && (360/(180-a))>=3) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}