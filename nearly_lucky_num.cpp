#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    int elen=0;
    while(n!=0){
        int x=n%10;
        if(x==7 || x==4){
            elen++;
        }
        n/=10;
    }
    cout << ((elen == 4 || elen == 7) ? "YES\n" : "NO\n");
    return 0;
}
