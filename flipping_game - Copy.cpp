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
    for(auto &x:num) cin>>x;
    int cnt1=count(num.begin(),num.end(),1);
    //Kadane’s algorithm use korbo muhehehehe
    int best=INT_MIN,cur=0;
    for(int val:num){
        val=((val==1) ? -1:1);
        cur=max(val,cur+val);
        best=max(cur,best);
    }
    if(cnt1==n) cout<<n-1<<endl;
    else cout<<cnt1+best<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}