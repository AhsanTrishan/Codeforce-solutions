#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    set <int> level;
    int limit;cin>>limit;
    for(int i=0;i<limit;i++){
        int x;cin>>x;
        level.insert(x);
    }
    int ylimit;cin>>ylimit;
    for(int i=0;i<ylimit;i++){
        int y;cin>>y;
        level.insert(y);
    }

    if(level.size()==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!";
    return 0;
}