#include <bits/stdc++.h>
#define ll long long
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
        vector <int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        bool unsorted=false;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<0){
                unsorted=true;
            }
        }
        if(unsorted){
            cout<<0<<endl;
            continue;
        }
        int ans=INT_MAX;
        for(int i=1;i<n;i++){
            int x= ((a[i]-a[i-1])/2)+1;
            ans=min(ans,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}