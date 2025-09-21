#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int anton=0,danik=0;
    string matches;cin>>matches;
    for(int i=0;i<n;i++){
        if(matches[i]=='A') anton++;
        else if(matches[i]=='D') danik++;
    }
    (danik>anton)? cout<<"Danik\n":(anton>danik)? cout<<"Anton\n":cout<<"Friendship\n"; 
    return 0;
}
