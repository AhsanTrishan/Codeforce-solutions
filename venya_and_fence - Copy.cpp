#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h;cin>>n>>h;
    int fren[n],width=0;
    for(int i=0;i<n;i++) {
        cin>>fren[i];
        if(fren[i]<=h) width++;
        else width+=2;
    }
    cout<<width<<endl;    
    return 0;
}
