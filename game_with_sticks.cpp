#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,t;cin>>n>>t;
    if(min(n,t)%2==0) cout<<"Malvika\n";
    else cout<<"Akshat\n";
    return 0;
}