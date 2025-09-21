#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,count=1;cin>>t;
    int maxi=1;
    vector <int> step(t);
    for(int i=0;i<t;i++) cin>>step[i];
    for(int i=1;i<t;i++){
        if(step[i]>=step[i-1]) {
            count++;
            maxi=max(maxi,count);
        }
        else count=1;
    }
    cout<<maxi<<endl;
    return 0;
}