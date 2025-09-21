#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <int> num(n);
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(num[i]==1) cnt1++;
        if(num[i]==2) cnt2++;
    }
    int sum= cnt2*2+cnt1;
    if(sum%2==1) cout<<"NO\n";
    else if((sum/2)%2==1 && cnt1<2) cout<<"NO\n";
    else cout<<"YES\n";
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}