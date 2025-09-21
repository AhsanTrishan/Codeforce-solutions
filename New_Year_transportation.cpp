#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,k; cin>>n>>k;
    vector <int> way(n-1);
    int j=0;
    for(int i=0;i<n-1;i++) cin>>way[i];
    for(j=0;j<n-1;){
        if(j== k-1){
            cout<<"YES\n";
            return 0;
        }
        j+=way[j];
    }
    if(j==k-1)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}