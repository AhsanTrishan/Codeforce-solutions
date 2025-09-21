#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;cin>>n>>k;
    vector<int> house(k);
    long long currenthouse=1;
    long long total=0;
    for(int i=0;i<k;i++) cin>>house[i];
    for(int i=0;i<k;i++) {
        if(house[i]>currenthouse) {
            total+= house[i]-currenthouse;
            currenthouse =house[i];
        }
        else if(house[i]<currenthouse) {
            total+= n-currenthouse+house[i];
            currenthouse= house[i];
        }    
    }
    cout<<total<<endl;
    return 0;
}