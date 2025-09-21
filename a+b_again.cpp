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
        int x;cin>>x;
        int result=0;
        while(x!=0){
            result += x%10;
            x/=10;
        }
        cout<<result<<endl;
    }
    return 0;
}