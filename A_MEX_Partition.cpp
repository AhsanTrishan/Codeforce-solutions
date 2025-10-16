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
        int n;cin>>n;
        vector <int> a(n),check(101,false);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<=101) check[a[i]]=true;
        }
        int mex=0;
        while(mex<=101 && check[mex]){
            mex++;
        }
        cout<<mex<<endl;
    }
    return 0;
}   