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
        int a,b,c;cin>>a>>b>>c;
        int mina=min(a,min(b,c));
        int maxa=max(a,max(b,c));
        cout<<a+b+c-mina-maxa<<endl;
    }
    return 0;
}