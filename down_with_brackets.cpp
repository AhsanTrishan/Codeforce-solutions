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
        int bal=0;bool ok=true;
        for(int i=1; i<s.length()-1;i++){
            if(s[i]=='(') bal++;
            if(s[i]==')') bal--;
            if(bal<0){
                ok = false;
                break;
            }
        }
        if(bal==0 && ok) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}