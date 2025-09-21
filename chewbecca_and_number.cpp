#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    string s;cin>>s;
    for(int i=0; i<s.length();i++){
        if(i==0){ 
            if(s[i]!='9'){
                 if('9'-s[i]<s[i]-'0') s[i]= '9'-s[i]+'0';
            }
        }
        else{
            if('9'-s[i]<s[i]-'0'){
                    s[i]= '9'-s[i]+'0';
            }
        }
    }
    cout<<s<<endl;
    return 0;
}