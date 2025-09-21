#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector<int>pages(7);
    for(int i=0;i<7;i++) cin>>pages[i];
    int bakipage=n;
    int day=0;
    while(1){
        bakipage-=pages[day];
        if(bakipage<=0){
            cout<<day+1<<endl;
            return;
        }
        day++;
        if(day==7) day=0;   
    }
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}