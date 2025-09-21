#include <bits/stdc++.h>
using namespace std;
int main(){
    int police=0,crime=0, n;cin>>n;
    vector <int> events(n);
    for(int i=0;i<n;i++) cin>>events[i];
    for(int i=0;i<n;i++){
        if(events[i]>0) police+=events[i];
        else if(events[i]<0){
            if(police>0) police--;
            else crime++;
        }
    }
    cout<<crime<<endl;
    return 0;
}