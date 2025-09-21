#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int cnt=0;
    char c;
    for(int i=0; i<10; i++){
        for(int j=0; j<10;j++){
            cin>>c;
            if(c=='X') cnt+= min({i,j,9-i,9-j})+1;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}