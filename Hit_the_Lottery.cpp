#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    vector <int> dollar={100,20,10,5,1};
    int count=0;
    for(int x: dollar){
        if(n>=0){
            count+= n/x;
            n=n%x;
        }
    }
    cout<<count<<endl;
    return 0;
}