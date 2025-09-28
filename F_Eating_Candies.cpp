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
        int n;cin>>n;
        vector <int> a(n);
        ll leftsum=0,rightsum=0,best=0;
        for(int i=0;i<n;i++) cin>>a[i];
        ll l=0,r=n-1;
        while(l<=r){
            if(leftsum<rightsum){
                leftsum+=a[l];
                l++;
            }
            else if(rightsum<leftsum){
                rightsum+=a[r];
                r--;
            }
            else{
                best=max(best,l+(n-1-r));

                if(l<=r){
                    leftsum+=a[l];
                    l++;
                }
            }
        }
        if(leftsum==rightsum) best=max(best, l+(n-1-r));
        cout<<best<<endl;
    }
    
    return 0;
}
