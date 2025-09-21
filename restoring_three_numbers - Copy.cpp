#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> sum(4);
    for(int i=0;i<4;i++) cin>>sum[i];
    sort(sum.begin(),sum.end());
    cout<<sum[3]-sum[2]<<" "<<sum[3]-sum[1]<<" "<<sum[3]-sum[0]<<endl;
    return 0;
}