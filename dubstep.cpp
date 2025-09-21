#include <bits/stdc++.h>
using namespace std;
int main() {
    string a; cin>>a;
    string sub="WUB";
    int len=a.length();
        while(a.find(sub)!= string::npos){
            a.replace(a.find(sub),3," ");
        }
    
    stringstream ss(a);
    string word;
    while(ss>>word){
        cout<<word<<" ";
    }
    return 0;
}