#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        /*
        int box=0;
        for(int i = 0; i < n; i++){
            if(s[i] == '.') box++;
        }
        bool tcb = false;
        string substring_of_s="...";
        if(s.find(substring_of_s)!=-1) {
            tcb=true;
        }
        if(tcb) cout << "2" << endl;
        else cout << box << endl;
        */
        int cnt=0,best=0,wata=0;
        for(char ch:s) {
            if(ch=='.') {
                cnt++;
                wata++;
            }
            else cnt=0;
            best=max(cnt,best);
        }
        if(best>=3) cout<<2<<endl;
        else cout<<wata<<endl;
    }
    return 0;
}