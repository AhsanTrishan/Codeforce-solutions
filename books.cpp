#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    long long n,t;cin>>n>>t;
    vector <long long> time(n);
    for(long long i=0;i<n;i++) cin>>time[i];
    long long ans=0,left=0,right=0,sum=0;
    for(right =0; right<n; right++){
        sum+=time[right];
        if(sum>t){
            sum-=time[left++];
        }
        ans= max(ans, right-left+1);
    }
    cout<<ans<<endl;
    return 0;
}