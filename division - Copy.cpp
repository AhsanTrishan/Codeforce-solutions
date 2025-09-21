#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        string y= (x>=1900) ? "Division 1": (x>=1600) ? "Division 2": (x>=1400) ? "Division 3": "Division 4";
        cout<<y<<endl;
    }
    return 0;
}