#include <bits/stdc++.h>
#define ll long long
using namespace std;

void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  

void solve(){
    ll n;cin>>n;
    static const ll hor[18] ={
        11, 101, 1001, 10001, 100001, 1000001,
        10000001, 100000001, 1000000001, 10000000001,
        100000000001, 1000000000001LL, 10000000000001LL,
        100000000000001, 1000000000000001LL,
        10000000000000001, 100000000000000001,
        1000000000000000001
    };
    vector<ll> v;
    for (int k = 0; k < 18; k++) if (n%hor[k] == 0) v.push_back(n/hor[k]);

    if(v.empty()) cout<<0<<endl;
    else {
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout <<v[i]<<" ";
        }
        cout <<"\n";
    }
}
int main(){
    allahbhalojanen();
    ll t;cin >> t;
    while(t--) solve();
    return 0;
}
