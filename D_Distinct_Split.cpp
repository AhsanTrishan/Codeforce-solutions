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
        int size;cin>>size;
        string s;cin>>s;
        unordered_set <char> st,st2;
        vector <int> pref(size+1),suff(size+1);

        for(int i=1;i<=size;i++){
            st.insert(s[i-1]);
            pref[i]=st.size();
        }
        for(int i=size;i>=1;i--){
            st2.insert(s[i-1]);
            suff[i]=st2.size();
        }
        int ans=0,best=0;
        for(int i=0;i<size;i++){
            ans=pref[i]+suff[i+1];
            best=max(best,ans);
        }
        cout<<best<<endl;
    }
    return 0;
}
    