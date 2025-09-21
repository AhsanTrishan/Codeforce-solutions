#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        vector <int> dis(4);
        int count=0,i=0;
        while(i<4) {
            cin>>dis[i];
            if(i>0){
                if((dis[0]-dis[i])<0) count++;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}