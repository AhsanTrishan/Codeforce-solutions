#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
        vector<int> magnets(n);int count=1;
    for(int i=0;i<n;i++){
        cin>>magnets[i];
    }
    for(int i=0;i<n-1;i++){
        if(magnets[i]!=magnets[i+1]){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}