#include <bits/stdc++.h>
#define ll long long
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
        set <int> st;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            st.insert(x);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}