#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector <int> a(n),freq(n+1,0);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            freq[a[i]]++;
        }
        int cntmiss=0;
        int cntk=count(a.begin(),a.end(),k);
        for(int i=0;i<k;i++){
            if(freq[i]==0) cntmiss++;
        }
        cout<<max(cntmiss,cntk)<<endl;
    }    
    return 0;
}