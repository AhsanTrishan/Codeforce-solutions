#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    vector<int> shops(n);
    for(int i=0;i<n;i++) cin>>shops[i];
    sort(shops.begin(),shops.end());
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int count=upper_bound(shops.begin(),shops.end(),x) - shops.begin();
        cout<<count<<endl;
    }
    return 0;
}