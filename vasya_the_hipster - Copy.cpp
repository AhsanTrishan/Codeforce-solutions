#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    cout << ((a > b) ? b : a) << " " << (abs(a - b) / 2) << endl;
    return 0;
}
