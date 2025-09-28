#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int cnt1=1,cnt2=1;
        int best1=1, best2=1;
        for(char ch:s){
            if(ch=='<') {
                cnt1++;
                cnt2=1;
            }
            else if(ch=='>'){
                cnt2++;
                cnt1=1;
            }
            best1=max(best1,cnt1);
            best2=max(best2,cnt2);
        }
        cout<<(max(best1,best2))<<endl;
    }
    return 0;
}
    