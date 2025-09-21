#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long a,b,k;cin>>a>>b>>k;
        if(a==0&&b==0){
            cout<<0<<'\n';
            continue;
        }
        if(a<=k&&b<=k)cout<<1<<'\n';
        else{
        long long moves_a=(a+k-1)/k;
        long long moves_b=(b+k-1)/k;
        cout<<max(moves_a,moves_b)<<'\n';
        }
    }
return 0;
}