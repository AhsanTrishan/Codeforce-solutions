#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int x,y;
    int maxi=0,sum=0;
    while(n--){
        cin>>x>>y;
        sum-=x;
        sum+=y;
        maxi=max(sum,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}
