#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}
bool is_good(const vector<int>& a){
    set <int>x;
    for(int i:a) if(i!=-1) x.insert(i);
    if(x.empty()) return true;
    if(x.size()>1) return false;
    return *x.begin()>0;

}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<(is_good(a) ? "YES\n":"NO\n"); 
    }
    return 0;
}