#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a=1,b=n-1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i;
                b=n-a;
                break;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
    