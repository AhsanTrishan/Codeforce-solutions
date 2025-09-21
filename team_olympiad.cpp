#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    vector <int> stud(n),t1,t2,t3;
    for(int i=0;i<n;i++){
        cin>>stud[i];
        if(stud[i] == 1) t1.push_back(i+1);
        if(stud[i] == 2) t2.push_back(i+1);
        if(stud[i] == 3) t3.push_back(i+1);
    }
    
    int teams= min(t1.size(),min(t2.size(),t3.size()));
    
    cout<<teams<<endl;
    for(int i=0;i<teams;i++){
        cout<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
    }
    return 0;
}