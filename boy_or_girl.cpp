#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;cin>>name;
    vector <int> alphabets(26,0);
    int count=0;
    int len= name.length();
    for(int i=0;i<len; i++){
        if (alphabets[name[i]-'a']==0) {
            alphabets[name[i]-'a']=1;
            count++;
        }
    }
    if(count%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}