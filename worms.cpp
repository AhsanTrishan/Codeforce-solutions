#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t;cin >> t;
    vector <int> worms(t);
    vector <int> pile(t);
    for(int i=0; i<t; i++) {
        cin>>worms[i];
        pile[i]= worms[i]+ ((i>0) ? pile[i-1]: 0);
    }
    int m; cin>>m;
    while(m--){
        int x;cin>>x;
        int index= lower_bound(pile.begin(),pile.end(),x)-pile.begin();
        
        cout<<index+1<<'\n';
    }
    return 0;
}
