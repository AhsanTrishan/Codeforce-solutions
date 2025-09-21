#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        int rem = a % b;
        int count = (rem == 0) ? 0 : b - rem;
        cout<<count<<endl;
    }
    return 0;
}
