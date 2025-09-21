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
        string s1,s2;cin>>s1>>s2;
        swap(s1[0],s2[0]);
        cout<<s1<<" "<<s2<<endl;
    }
    
    return 0;
}