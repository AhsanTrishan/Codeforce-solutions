#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b; cin>>a>>b;
    if(a.length()!=b.length()){
        cout<<"NO\n";
        return 0;
    }
    int reverse =b.length()-1;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[reverse]){
            cout<<"NO\n";
            return 0;
        }
        reverse--;
    }
    cout<<"YES\n";
    return 0;
}
