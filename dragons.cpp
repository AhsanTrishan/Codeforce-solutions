#include <bits/stdc++.h>
using namespace std;
struct stats{
    int dragon;
    int powerup;
};
bool compare(stats a,stats b){
    return a.dragon < b.dragon;
}
int main() {
    int s,n;cin>>s>>n;
    stats game[n];
    for(int i=0; i<n; i++){
        cin>>game[i].dragon>>game[i].powerup;
    }
    sort(game , game+n , compare);
    for(int i=0;i<n;i++){
        if(s>game[i].dragon) s+=game[i].powerup;
        else{
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}