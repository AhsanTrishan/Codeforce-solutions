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
        if(a<b && b<c) cout<<"STAIR\n";
        else if(a<b && b>c) cout<<"PEAK\n";
        else cout<<"NONE\n";
    }
    return 0;
}