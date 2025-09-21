#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string x; int k; cin>>x>>k;
        string y="";
        for(int i=0;i<k;i++) y+=x;
        if(y.length()>18) cout<<"NO\n";
        else {
            long long num=stoll(y);
            if(isPrime(num)) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
