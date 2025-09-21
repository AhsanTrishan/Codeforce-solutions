#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,t;cin>>n>>t;
    if(t==10){
        if(n==1) cout<<-1<<endl;
        else{
            cout<<1;
            for(int i=1;i<n;i++) cout<<0;
        }
    }
    else{
        cout<<t;
        for(int i=1;i<n;i++) cout<<0;
    }
    return 0;
}