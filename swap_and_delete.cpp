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
        int count1=0,count0=0;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='1') count1++;
            else count0++;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(count1) count1--;
                else break;
            }
            else{
                if(count0) count0--;
                else break;
            } 
        }
        cout<<count1+count0<<endl;
    }
    return 0;
}