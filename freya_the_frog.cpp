#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int x,y,k;cin>>x>>y>>k;
        int x_moves= (x+k-1)/k;
        int y_moves= (y+k-1)/k;

        int moves = 2*max(x_moves,y_moves);
        if(x_moves>y_moves){
            moves-=1;

        }
        cout<<moves<<endl;
    }
    return 0;
}