#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> fren(3);
    for(int i=0;i<3;i++) cin>>fren[i];
    sort(fren.begin(),fren.end());
    cout<<fren[2]-fren[0]<<endl;
    return 0;
}