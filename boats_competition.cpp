#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <int> w(n);
    for(auto &x: w) cin>>x;
    int maxW = *max_element(w.begin(), w.end());
    vector <int> weight(maxW+1,0);
    for(int &x:w) weight[x]++;

    int best=0;
    for(int s=2; s<=2*maxW; s++){
        int pairs=0;
        for(int x=1;x<=maxW&&x<=s-x;x++){
            int y=s-x;
            if(y<1 || y>maxW) continue;
            if(x==y) pairs+=weight[x]/2;
            else pairs+=min(weight[x],weight[y]);
        }
        best=max(best,pairs);
    }
    cout<<best<<endl;
}
int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}