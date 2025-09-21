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
        int iter=0;
        vector <int> ans;
        for(int i=0; i<s.length();i++){
            if(s[i]!='0'){
                int x= (s[i]-'0')*pow(10,(s.length()-i-1));
                ans.push_back(x);
                iter++;
            }
        }
        cout<<iter<<'\n';
        for(int i=0; i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}