#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <ll> a(n),b(n),c(n),d(n);
    ll result=0;
    for(int i=0;i<n;i++) {
        cin>>a[i]>>b[i]>>c[i]>>d[i];

        if(b[i]>d[i])//extra one in given pile
        result+= a[i]+(b[i]-d[i]); //why add a[i]? cause age zero move then extra ones ekishathe zero er kaj oijay
        
        else if(a[i]>c[i])//extra zero in given pile .. else if karon extra one thakle zero emneu count oijay
        result+= a[i]-c[i];
    }
    cout<<result<<endl;
}

int main(){
    allahbhalojanen();
    ll t;cin>>t;
    while(t--) 
    solve();
    return 0;
}