#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    ll n;cin>>n;
    multiset<ll>taken;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        taken.insert(x);
        sum+=x;
        if(sum<0){
            auto it=taken.begin();
            sum-=*it;
            taken.erase(it);
        }
    }
    cout<<(int)taken.size()<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}