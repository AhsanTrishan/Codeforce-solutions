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
        int n;cin>>n;
        vector <int> x(n);
        int mx=INT_MIN;int cnt=0;
        for(int i=0;i<n;i++) {
            cin>>x[i];
            if(x[i]==0) cnt++;
            else cnt=0;
            mx=max(mx,cnt);
        }
        cout<<mx<<endl;
    }
    return 0;
}