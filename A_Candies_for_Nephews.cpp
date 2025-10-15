#include <bits/stdc++.h>
#define ll long long
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
        if(n%3==0) cout<<0<<endl;
        else cout<<3-(n%3)<<endl;
    }
    return 0;
}