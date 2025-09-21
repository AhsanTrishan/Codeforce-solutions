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
        string s;cin>>s;
        int c1=0,c0=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0') c0++;
            else c1++;
        }
        int mn = max(c0, c1) - n / 2;
        int mx = c0 / 2 + c1 / 2;
        if (k>=mn && k<=mx && ((k-mn) % 2==0)) cout << "YES\n";
        else cout << "NO\n";
    return 0;
}