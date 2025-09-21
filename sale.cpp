#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,m;cin>>n>>m;
    vector <int> tv(n);
    for(int i=0;i<n;i++) cin>>tv[i];
    sort(tv.begin(),tv.end());
    int sum=0;
    for(int i=0;i<m;i++){
        if(tv[i]<0){
            sum+=tv[i];
        }
        else break;
    }
    cout<<abs(sum)<<endl;
    return 0;
}