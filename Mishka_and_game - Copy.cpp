#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    int cntm=0,cntc=0;
    while(t--){
        int x,y;cin>>x>>y;
        if(x>y) cntm++;
        if(y>x) cntc++;
    }
    cout<<((cntm>cntc) ? "Mishka\n":(cntc>cntm) ?"Chris\n":"Friendship is magic!^^\n");
    return 0;
}