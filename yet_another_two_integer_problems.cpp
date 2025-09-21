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
        int a,b;cin>>a>>b;
        int x= abs(a-b);
        if(x==0) cout<<0<<endl;
        else if(x<10) cout<<1<<endl;
        else {
            if(x%10!=0) cout<<(x/10)+1<<endl;
            else cout<<x/10<<endl;
        } 
    }   
    return 0;
}