#include <bits/stdc++.h>
using namespace std;
int main() {
    double n;cin >> n;
    double total=0;
    vector<double>drinks(n);
    for(int i=0;i<n;i++) {
        cin>>drinks[i];
        total+=drinks[i];
    }
    cout<<fixed<<setprecision(12)<<total/n<<endl;
    return 0;
}