#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        unordered_map <long long,long long> arr;
        long long cnt=0;
        for(long long i=0; i<n; i++) {
            long long x; cin>>x;
            long long b= x-i;
            cnt+=arr[b];
            arr[b]++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}