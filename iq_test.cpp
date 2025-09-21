#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    vector <int> num(n);int odd=0,even=0,oddi,eveni;
    for(int i=0;i<n;i++) {
        cin>>num[i];
        if(num[i]%2==0) {
            even++;
            eveni=i;
        }
        else {
            odd++;
            oddi=i;
        }
    }
    if(odd==1) cout<<oddi+1<<endl;
    else cout<<eveni+1<<endl;
    return 0;
}