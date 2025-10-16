#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){    
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        vector <int> v;
        v.push_back(0);
        while(n--){
            int a;cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int best=0;
        for(int i=1;i<(int)v.size();i++){
            int diff=abs(v[i]-v[i-1]);
            best=max(diff,best);
        }
        best = max(best, 2*(x-v.back()));
        cout<<best<<endl; 
    }
    return 0;
}