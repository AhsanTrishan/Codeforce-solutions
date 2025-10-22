#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main(){  
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
      ll n;cin>>n;
      vector <int> a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      ll x= *max_element(a.begin(),a.end());
      cout<<x<<endl;
    }
    return 0;
}