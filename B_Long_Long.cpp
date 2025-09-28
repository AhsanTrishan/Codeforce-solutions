#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> a;
        ll sum=0,cnt=0;
        for(int i=0;i<n;i++) {
            ll x;cin>>x;
            sum+=llabs(x);
            if(x!=0) a.push_back(x);
        }
        if(!a.empty() && a[0]<0) cnt++;
        for(int i=1;i<(int)a.size();i++){
            if(a[i]<0 && a[i-1]>0) cnt++;
        }
        cout<<sum<<" "<<cnt<<endl;   
    }
    return 0;
}
