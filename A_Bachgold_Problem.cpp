#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int n;cin>>n;
    if(n&1){
        int x=n/2;
        cout<<x<<'\n';
        cout<<3<<" ";
        for(int i=0;i<x-1;i++) cout<<2<<" ";
    }
    else{
        cout<<n/2<<'\n';
        for(int i=0;i<n/2;i++) cout<<2<<" ";
    }
    return 0;
}
