#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> v={1,5,8,2,10,3,7,4,9,14,11};
    int i=0,count=0,len= v.size();
    while(count<len){
        if(v[i]%2!=0){
            v.push_back(v[i]);
            v.erase(v.begin()+i);
        }
        else i++;
        count++;
    }
    for(int x: v) cout<<x<<" ";
    return 0;
}