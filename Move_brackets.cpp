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
        int n;cin>>n;
        string s;cin>>s;
        int balance=0,bad=0;
        for(int i=0; i<n; i++){
            if(s[i]=='(') balance++;
            else balance--;
            if(balance<0) {
                bad++;
                balance=0;
            }    
        }
        cout<<bad<<endl;
    }
    return 0;
}