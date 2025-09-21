#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
int main(){
    allahbhalojanen();
    
    int n;cin>>n;
    vector <int> cnt(n+1,0);
    for(int i=2;i<=n;i++){
        if(cnt[i]==0){
            for(int j=i;j<=n;j+=i){
                cnt[j]++;
            }
        }
    }
    int count=0;
    for(auto &x: cnt) if(x==2) count++;
    cout<<count<<endl;
    
    return 0;
}