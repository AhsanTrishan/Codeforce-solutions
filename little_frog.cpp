#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector<int>mound(n);
    for(int i=1;i<=n;i++) mound[i-1]=i;
    int l=0,r=n-1;
    for(int i=0;i<n;i++) {
        if(i%2==0){
            cout<<mound[l]<<" ";
            l++;
        }
        else{
            cout<<mound[r]<<" ";
            r--;
        }
    }
    cout<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}