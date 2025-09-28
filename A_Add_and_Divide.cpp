#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        ll ans=INT_MAX;
        for(ll i=0;i<32;i++){
            ll operations=i;
            ll new_b=b+i;
            if(new_b==1) continue;
            ll temp_a=a;
            while(temp_a>0){
                temp_a/=new_b;
                operations++;
            }
            ans=min(ans,operations);
        }
        cout<<ans<<endl;
    }
}