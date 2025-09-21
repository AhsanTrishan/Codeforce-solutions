#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,k;cin>>n>>k;
    vector <int> fence(n);
    for(int i=0;i<n;i++) cin>>fence[i];
    int sum=0;
    for(int i=0; i<k; i++) sum+=fence[i];

    int minsum=sum,index=0;
    for(int i=k; i<n; i++){
        sum= sum - fence[i-k] + fence[i];
        if(sum<minsum) {
            minsum = sum;
            index=i+1-k;
        }    
    }
    cout<<index+1<<endl;
    return 0;
}