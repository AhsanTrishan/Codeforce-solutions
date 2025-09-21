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
        int n;cin>>n;
        vector <int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int iter=0;
        while(true){
            iter++;
            bool stp1=false;
            for(int i=0;i<n;i++){
                if(a[i]>b[i]){
                    a[i]--;
                    stp1=true;
                    break;
                }
            }
            if(!stp1) break;
            for(int i=0;i<n;i++){
                if(a[i]<b[i]){
                    a[i]++;
                    break;
                }
            }
        }
        cout<<iter<<endl;
    }
    return 0;
}