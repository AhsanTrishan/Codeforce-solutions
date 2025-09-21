#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,m;cin>>n>>m;
    int count=0;
    while(m>n){
        if(m%2==0){
            m/=2;
            count++;
        }
        else {
            m++;
            count++;
        }
    }
    cout<<count+(n-m)<<endl;
    return 0;
}