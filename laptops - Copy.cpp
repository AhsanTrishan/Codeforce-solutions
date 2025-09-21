#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    vector <pair<int,int>> laptop(n);
    for(int i=0;i<n;i++) cin>>laptop[i].first>>laptop[i].second; 
    sort(laptop.begin(),laptop.end());
    for(int i=1; i<n; i++){
        if(laptop[i-1].second>laptop[i].second){
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
    return 0;
}