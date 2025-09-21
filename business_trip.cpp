#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    vector <int> month(12);
    int n;cin>>n;
    for(auto &x:month) cin>>x;
    sort(month.begin(),month.end());
    int cnt=0,sum=0;
    for(int i=11;i>=0;i--){
        if(sum>=n){
            cout<<cnt<<endl;
            return;
        }
        sum+=month[i];
        cnt++;
        
    }
    cout<<((sum>=n)?cnt:-1)<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}