#include <iostream>
using namespace std;
int main() {
    int n,k;cin>>n>>k;
    int count=0,mul=0;
    for(int i=1;i<=n;i++){
        mul+=5*i;
        if(mul>240-k) break;
        count++;
    }
    cout<<count;
    return 0;
}