#include <bits/stdc++.h>
using namespace std;
int main(){
    const int N = 1e6+6;
    vector <bool> isprime(N,true);
    isprime[0]=false;isprime[1]=false;
    for(long long i=2; i*i<N; i++){
        if(isprime[i]){
            for(long long j=i*i; j<N; j+=i){
                isprime[j] = false;
            }
        }
    }
    int t;cin>>t;
    while(t--){
        long long x;cin>>x;
        long long root=sqrt(x);
        if(root*root==x && isprime[root]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}