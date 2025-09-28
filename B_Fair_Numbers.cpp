#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isfair(ll n){
    ll num=n;
    while(num!=0){
        int x=num%10;
        if(x!=0 && n%x!=0){
            return false;
        }
        num/=10;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        //2520 is a superfair number (multiple of 1 to 9) so time limit er pera nai cause ami sure 2520 boundary te fair number faimu brute force lmao
        while(!isfair(n)){
            n+=1;
        }
        cout<<n<<endl;
        
    }
    return 0;
}