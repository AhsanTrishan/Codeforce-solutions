#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    vector <int> soldiers(n);
    int indexmax=0,indexmin=0;
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++) {
        cin>>soldiers[i];
        if(soldiers[i]>max){
            max=soldiers[i];
            indexmax =i;
        }
        if(soldiers[i]<=min){
            min=soldiers[i];
            indexmin=i;
        }
    }
    int steps = indexmax + (n - 1 - indexmin);
    if (indexmax > indexmin) steps--;
    cout << steps << endl;
    return 0;
}