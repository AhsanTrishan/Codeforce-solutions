#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totaldrink= k*l,totalslice=c*d;
    int perdrink=totaldrink/nl, pergram=p/np;
    cout<<(min(perdrink,min(pergram,totalslice))/n)<<endl;
    return 0;
}