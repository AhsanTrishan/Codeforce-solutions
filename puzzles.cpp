#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int m,n;cin>>m>>n;
    vector<int>puz(n);
    int mina=INT_MAX;
    for(int i=0;i<n;i++) cin>>puz[i];
    sort(puz.begin(),puz.end());
    for(int i=0; i<=n-m; i++){
        mina=min(mina,(puz[m+i-1]-puz[i]));
    }
    cout<<mina<<endl;
    return 0;
}