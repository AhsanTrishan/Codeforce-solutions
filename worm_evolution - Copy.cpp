#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <int> worm(n+1);
    for(int i=1;i<=n;i++) cin>>worm[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) continue;
            for(int k=1;k<=n;k++){
                if(i==k || j==k) continue;
                if(worm[i]==worm[j]+worm[k]) {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return;
                }
            }   
        }
    }
    cout<<-1<<endl;
}
int main(){
    allahbhalojanen();
    solve();
    return 0;
}