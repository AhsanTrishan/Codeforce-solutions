#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int thikase=1,cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') cnt++;
        if(i>=k && s[i-k]=='1') cnt--;
        if(i>=k-1 && cnt==k){
            thikase=0;
            break;
        }
    }
    if(!thikase){
        cout<<"NO\n";
        return;
    }
    vector<int> ans(n,0);
    int val=n;
    for(int i=0;i<n;i++) if(s[i]=='0') ans[i]=val--;
    for(int i=0;i<n;i++) if(s[i]=='1') ans[i]=val--;
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<(i==n-1?'\n':' ');
    }
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}
