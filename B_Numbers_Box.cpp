#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<vector<int>> a(n, vector<int>(m));
        int cnt=0,mini=INT_MAX,sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]<0) cnt++;
                int x= abs(a[i][j]);
                mini=min(mini,x);
                sum+=abs(a[i][j]);
            }
        }
        if(cnt%2==0) cout<<sum<<endl;
        else cout<<sum-2*mini<<endl; 
    }
    return 0;
}