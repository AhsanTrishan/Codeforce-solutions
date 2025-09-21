#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,cost=0,loan=0;cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        cost+=i*k;
    }
    loan=cost-n;
    if(loan<0) cout<<0<<endl;
    else cout<<loan<<endl;
    return 0;
}