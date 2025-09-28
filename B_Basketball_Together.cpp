#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int n,d;cin>>n>>d;
    vector <int> powa(n);
    for(int i=0;i<n;i++) cin>>powa[i];
    sort(powa.begin(),powa.end());
    int l=-1,r=n-1;
    int teamsize=1,teams=0;
    while(l<r){
        if(powa[r]*teamsize<=d){
            l++;
            teamsize++;
        }
        else{
            r--;
            teams++;
            teamsize=1;
        }
    }
    cout<<teams<<endl;
    return 0;
}
    