#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector <string> goal(n);
    for(int i=0;i<n;i++) cin>>goal[i];
    string a=goal[0];
    string b;int ga=0,gb=0;
    for(int i=0;i<n;i++){
        if(goal[i]==a) ga++;
        else {
            gb++;
            b=goal[i];
        }  
    }
    if(ga>gb) cout<<a<<endl;
    else cout<<b<<endl;
    return 0;
}
