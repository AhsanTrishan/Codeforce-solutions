#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll x,y,k;cin>>x>>y>>k;
        ll stickprofit= x-1;
        ll stickneed= k*y+ k-1;
        ll trade=(stickneed+stickprofit-1)/stickprofit;
        trade+=k;
        cout<<trade<<endl;
    }
    return 0;
}