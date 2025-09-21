#include <bits/stdc++.h>
using namespace std;
int main(){
    const int N= 1e9+9;
    vector <bool> isprime(N,true);
    isprime[0]=false; isprime[1]=false;
    for(long long i=2;i*i<N;i++){
        if(isprime[i]){
            for(long long j=i*i; j<N; j+=i){
                isprime[j]=false;
            }
        }
    }
    int t;cin>>t;
    while(t--){
        long long n,x;cin>>n>>x;
        int digits=log10(n)+1,base=1;
        for (int i = 0; i < digits; i++) base *= 10;
        long long newnum = 0;
        for (int i=0;i<x;i++) {
            newnum = newnum * base + n;
        }
        if(isprime[newnum]) cout<<"YES\n";
        else cout<<"NO\n";
    }   
    return 0;
}