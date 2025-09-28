#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        ll a,b,cnt=0;
        a=min(n,m);
        b=max(n,m);
        if(b%a!=0) {
            cout<<-1<<endl;
            continue;
        }

        ll  r=b/a;
        while(r%2==0){
            r/=2;
            cnt++;
        }
        if(r!=1){
            cout<<-1<<endl;
            continue;
        }
        ll moves=0;
        moves+=cnt/3;
        cnt%=3;
        moves+=cnt/2;
        cnt%=2;
        moves+=cnt;
        cout<<moves<<endl;
    }
    return 0;
}