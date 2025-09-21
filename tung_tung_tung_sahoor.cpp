#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    string a;cin>>a;
    string b;cin>>b;
    if(a.size()>b.size() || b.size()>2*a.size() || a[0]!=b[0]) {
        cout<<"NO\n";
        return;
    }

    vector<int> aa,bb;
    int cnt=1;
    for(int i=1; i<a.size();i++){
        if(a[i]!=a[i-1]){
            aa.push_back(cnt);
            cnt =1;
        }
        else cnt++;
    }
    aa.push_back(cnt);

    cnt=1;
    for(int i=1; i<b.size();i++){
        if(b[i]!=b[i-1]){
            bb.push_back(cnt);
            cnt =1;
        }
        else cnt++;
    }
    bb.push_back(cnt);

    if(aa.size()!=bb.size()){
        cout<<"NO\n";
        return;
    }
    int x=aa.size();
    for(int i=0;i<x;i++){
        if(aa[i]>bb[i] || 2*aa[i]<bb[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main(){
    allahbhalojanen();
    ll t;cin>>t; while(t--) 
    solve();
    return 0;
}