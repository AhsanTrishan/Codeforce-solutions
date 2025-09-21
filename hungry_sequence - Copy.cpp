#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void seive(){
    const int N=1e7+7;
    vector <int> isprime(N,true);
    isprime[0]=false;isprime[1]=false;
    for(int i=2; i*i<=N;i++){
        if(isprime[i]){
            for(int j=i*i;j<N;j+=i){
                isprime[j]=false;
            }
        }
    }
    int n;cin>>n;
    int cnt=0;
    for(int i=0;i<N && cnt<n;i++){
        if(isprime[i]) {
            cout<<i<<" ";
            cnt++;
        }
    }
}

int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    seive();
    return 0;
}