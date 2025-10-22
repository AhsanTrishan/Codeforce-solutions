#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main(){  
    allahbhalojanen();
    ll t;cin>>t;
    while(t--){
        ll n,m,k;cin>>n>>m>>k;
        vector<ll> jelly(n),gelly(m);
        ll jellysum=0;
        for(int i=0;i<n;i++){
            cin>>jelly[i];
            jellysum+=jelly[i];
        }
        for(int i=0;i<m;i++){
            cin>>gelly[i];
        }

        sort(jelly.begin(),jelly.end());
        sort(gelly.begin(),gelly.end());
        
        if(jelly[0]<gelly[m-1]){
            jellysum = jellysum-jelly[0]+gelly[m-1];
            swap(jelly[0],gelly[m-1]);
        }
        k--; //1 round shesh
        //k>=1 so ig its okay
        sort(jelly.begin(),jelly.end());
        sort(gelly.begin(),gelly.end());

        if(k&1){
            jellysum= jellysum-jelly[n-1]+gelly[0];
        }
        cout<<jellysum<<endl;
    }
    return 0;
}