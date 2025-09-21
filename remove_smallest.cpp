#include <bits/stdc++.h>
using namespace std;

void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    allahbhalojanen();
    int t;cin >> t;
    while (t--) {
        int n;cin>>n;
        vector <int> num(n);
        for(int i=0;i<n; i++) cin>>num[i];
        sort(num.begin(),num.end());
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        bool ok=true;
        for(int i=1;i<n; i++) {
            if(abs(num[i]-num[i-1])>1){
                ok = false;
                break;
            }
        }
        (ok) ? cout<<"YES\n": cout<<"NO\n";
    }    
    return 0;
}
