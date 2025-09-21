#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,x,y;cin>>a>>x>>y;
        bool ase=false;
        for(int i=1;i<=100;i++){
            if(abs(x-a)>abs(x-i) && abs(y-a)>abs(y-i)) {
                ase=true;
                break;
            }
        }
        if(ase) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}