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
        if(a+b==c) cout<<'+'<<endl;
        if(a-b==c) cout<<'-'<<endl;
    }
    return 0;
}