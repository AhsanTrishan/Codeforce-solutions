#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n; cin>>n;
    vector <int> score(n);
    int count =0;
    for(int i=0;i<n;i++) cin>>score[i];
    int maxi=score[0],mini=score[0];
    for(int i=0;i<n;i++){
        if(score[i]>maxi){
            count++;
            maxi=max(maxi,score[i]);
        }
        if(score[i]<mini){
            count++;
            mini=min(mini,score[i]);
        }
    }
    cout<<count<<'\n';
    return 0;
}