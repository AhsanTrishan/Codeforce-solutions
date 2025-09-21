#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string a="codeforces";
        int cnt=0;
        for(int i=0;i<10;i++){
            if(s[i]!=a[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}