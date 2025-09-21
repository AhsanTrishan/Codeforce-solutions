#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,l;cin>>n>>l;
    vector <double> lantern(n);
    for(double i=0;i<n;i++) cin>>lantern[i];
    sort(lantern.begin(),lantern.end());
    double m=max(abs(0-lantern[0]),abs(lantern[lantern.size()-1]-l));
    for(int i=1;i<n;i++){
        double x= abs(lantern[i]-lantern[i-1]);
        m=max(x,m);
    }
    if(abs(0-lantern[0])<m/2 && abs(lantern[lantern.size()-1]-l)<m/2)cout<<fixed<<setprecision(10)<<m/2<<endl;
    else if(abs(lantern[lantern.size()-1]-l)<abs(0-lantern[0])) cout<<fixed<<setprecision(10)<<abs(0-lantern[0])<<endl;
    else cout<<fixed<<setprecision(10)<<abs(lantern[lantern.size()-1]-l)<<endl;
    return 0;
}