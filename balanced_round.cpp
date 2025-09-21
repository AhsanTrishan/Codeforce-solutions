#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector <int> x(n);
        for(int i=0;i<n;i++) cin>>x[i];
        sort(x.begin(),x.end());
        int cnt=1;int maxi=1;
        for(int i=1;i<n;i++){
            if(x[i]-x[i-1]<=k) cnt++;
            else cnt=1;
            maxi=max(maxi,cnt);
        }
        cout<<n-maxi<<endl;
    }
    return 0;
}