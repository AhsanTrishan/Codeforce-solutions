#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int sum=0,halfsum=0,count=0;
    vector <int> coins(n);
    for(int i=0;i<n;i++) {
        cin>>coins[i];
        sum+=coins[i];
    }
    sort(coins.rbegin(), coins.rend());
    for(int x: coins){
        halfsum+=x;
        count++;
        if(halfsum>sum/2) break;
    }
    cout<<count<<endl;
    return 0;
}