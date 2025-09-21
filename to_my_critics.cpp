#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    while(n--){
        int a,b,c;cin>>a>>b>>c;
        if(a+b>=10 || b+c>=10 || c+a>=10) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}