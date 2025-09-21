#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    vector <int> num(n);
    int maxi=INT_MIN, count=0;
    for(int i=0;i<n;i++){
        cin>>num[i];
        maxi=max(maxi,num[i]);
    }
    for(int i=0;i<n;i++){
        count+= maxi-num[i];
    }
    cout<<count<<endl;
    return 0;
}