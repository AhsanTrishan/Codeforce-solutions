#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,m; cin>>n>>m;
    int cnt=n,remain=n;
    while(remain>=m){
        cnt+=remain/m;
        remain=(remain/m)+(remain%m);
    }
    cout<<cnt<<endl;
    return 0;
}