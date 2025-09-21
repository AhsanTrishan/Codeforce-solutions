#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,x;cin>>n>>x;
    int cnt=0;
    for(int i=1; i*i<=x; i++){
        if(x%i==0){
            if(i<=n && x/i<=n) cnt++;
            if(x/i!=i && x/i<=n) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}