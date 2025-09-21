#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector <int> b=a;
    sort(a.begin(),a.end());
    if(a==b){
        cout<<"yes\n1 1\n";
        return 0;
    }
    int l=0, r=n-1;
    while(l<n && a[l]==b[l]) l++;
    while(r>=0 && a[r]==b[r]) r--;

    reverse(a.begin()+l,a.begin()+r+1);

    if(a==b) cout<<"yes\n"<<l+1<<" "<<r+1<<'\n';
    else cout<<"no\n";
    return 0;
}