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
        string a;cin>>a;
        int cnt=0;
        if(a[0]=='a') cnt++;
        if(a[1]=='b') cnt++;
        if(a[2]=='c') cnt++;
        if(cnt>=1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}