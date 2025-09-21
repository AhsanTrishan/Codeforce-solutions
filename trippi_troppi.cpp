#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;cin>>t;
    cin.ignore();
    while (t--){
        string a;getline(cin, a);
        string b="";b+=a[0];
        for(int i=0;i<a.length();i++){
            if(a[i]==' ') b+=a[i+1];
        }
        cout<<b<<endl;
    }
    return 0;
}