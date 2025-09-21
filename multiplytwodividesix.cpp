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
        int n;cin>>n;
        int cnt=0;
        while(n%6==0){
            n/=6;
            cnt++;
        }
        while(n%3==0){
            n*=2;
            n/=6;
            cnt+=2;
        }
        if(n==1) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}