#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int vectors[n][3];
    for(int i=0; i<n;i++){
        for(int j=0;j<3;j++){
            cin>>vectors[i][j];
        }
    }
    vector <int> sum(3,0);
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < n; i++) {
            sum[j] += vectors[i][j];
        }
    }
    (sum[0]==0 && sum[1]==0 && sum[2]==0) ? cout<<"YES\n": cout<<"NO\n";
    return 0;
}
