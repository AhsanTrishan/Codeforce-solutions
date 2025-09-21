#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int a;cin>>a;
    vector <int> fua(a);
    for(int i=0;i<a;i++) cin>>fua[i];
    sort(fua.begin(),fua.end());

    int b;cin>>b;
    vector <int> furi(b);
    for(int i=0;i<b;i++) cin>>furi[i];
    sort(furi.begin(),furi.end());

    int x=0,y=0,cnt=0;
    while(x<a && y<b){
        if(abs(fua[x]-furi[y]) <=1) {
            cnt++;
            x++;
            y++;
        }
        else if(fua[x]<furi[y]) x++;
        else y++;
    }
    cout<<cnt<<endl;
}

int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}