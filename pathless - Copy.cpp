#include <bits/stdc++.h>
#define ll long long
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}  
void solve(){
    int t;cin>>t;
    while(t--){
        int n,s;cin>>n>>s;
        vector <int>v(3,0);
        int sum=0;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            sum+=x;
            v[x]++;
        }

        if(sum>s){
            for(int i=0; i<3; i++){
                for(int j=0; j<v[i]; j++){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
            continue;
        }

        if(s-sum!=1){
            cout<<-1<<endl;
            continue;
        }

        for(int i=0;i<v[0];i++) cout<<0<<" ";
        for(int i=0;i<v[2];i++) cout<<2<<" ";
        for(int i=0;i<v[1];i++) cout<<1<<" ";
        cout<<endl;
    }
}

int main(){
    allahbhalojanen();
    solve();
    return 0;
}