#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int n;cin>>n;
    vector <int> arr(n);
    int twofive=0,fifty=0;
    bool ok=true;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]==25) twofive++;
        else if(arr[i]==50){
            if(twofive<1){
                ok=false;
                break;
            } 
            else{
                twofive--;
                fifty++;
            }
        }
        else{
            if(twofive>=3||(fifty>=1 && twofive>=1)) {
                ok=true;
                if(fifty>=1 && twofive>=1){
                    twofive--;
                    fifty--;
                }
                else twofive-=3;
            }
            else{
                ok=false;
                break;
            }
        }
    }
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    allahbhalojanen();
    //ll t;cin>>t;
    //while(t--) 
    solve();
    return 0;
}