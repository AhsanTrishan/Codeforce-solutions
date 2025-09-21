#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,m,a,b; cin>>n>>m>>a>>b;
    int rub= min({n*a, ((n/m)*b+(n%m)*a), ((n+m-1)/m)*b});
    cout<<rub<<endl;
    return 0;
}