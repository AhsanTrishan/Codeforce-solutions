#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>> n;
    string rock;cin>> rock;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(rock[i]==rock[i+1]) count++;
    }
    cout<<count<<endl;
    return 0;
}