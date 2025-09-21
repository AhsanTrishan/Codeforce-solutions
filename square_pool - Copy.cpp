#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t; cin >>t;
    while(t--) {
        int n,s; cin>>n>>s;
        int potted = 0;
        while(n--) {
            int dx, dy, xi, yi;
            cin>>dx>>dy>>xi>>yi;
            if(xi + yi == s) {
                if(dx*dy==-1) potted++;
            }
            if(xi == yi) {
                if(dx*dy==1) potted++;
            }
        }
        cout <<potted<<'\n';
    }
    return 0;
}