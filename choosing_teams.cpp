#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,k;cin>>n>>k;
    vector <int> person(n);
    int cnt=0;
    for(int i=0;i<n;i++) {
        cin>>person[i];
        if(5-person[i]>=k) cnt++;
    }
    cout<<cnt/3<<endl;
    return 0;
}