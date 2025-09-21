#include <bits/stdc++.h>
using namespace std;
int main(){
    string result="";
    string a,b;cin>>a>>b;
    for(int i=0;i<a.length();i++){
        result+=(a[i]==b[i])?'0':'1';
    }
    cout<<result<<endl;
    return 0;
}