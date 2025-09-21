#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,k;cin>>n>>k;
    int mx= max(n,k);
    int win=6-mx+1;
    int hor=6;
    int g= __gcd(win,hor);
    win /=g;
    hor /=g;
    cout<<win<<"/"<<hor<<endl;
    return 0;
}