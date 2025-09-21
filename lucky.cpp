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
        string s; cin>>s;
        int sum1=0,sum2=0;
        for(int i=0,j=5; i<3&&j>2;i++,j--) {
            sum1+=s[i]-'0';
            sum2+=s[j]-'0';
        }
        if(sum1==sum2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}