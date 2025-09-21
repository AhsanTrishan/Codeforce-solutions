#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    int i=1,use=0,h=0;
    while(true){
        use+= i*(i+1)/2;
        if(use<=n){
            h++;
            i++;
        }
        else break;
    }
    cout<<h<<endl;
    return 0;
}