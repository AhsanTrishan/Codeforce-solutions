#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,m;cin>>n>>m;
    if(m>n) {
        cout<<-1<<endl;
        return 0;
    }

    int x=n/2;int step=x+ n%2;
    while(step%m!=0){
        step+=1;
        if(step>n) break;
    }
    cout<<step<<endl;
    return 0;
}   