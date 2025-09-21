#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <int> time(n);
    for(auto &x:time) cin>>x;
    int a=0,b=0,l=0,r=n-1,suma=0,sumb=0;
    while (l<=r) {
        if (suma <= sumb) {
            suma +=time[l];
            l++;
            a++;
        } else {
            sumb +=time[r];
            r--;
            b++;
        }
    }
    cout<<a<<" "<<b<<endl;
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}