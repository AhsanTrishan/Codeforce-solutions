#include <bits/stdc++.h>
using namespace std;
int main(){
    string word; cin>>word;
    int countup=0,countlow=0;
    for(char c: word){
        if(isupper(c)) countup++;
        else if(islower(c)) countlow++;
    }
    if(countup>countlow){
        for(char &c: word) c=toupper(c);
    }
    else {
        for(char &c: word) c=tolower(c);
    }
    cout<<word<<endl;
    return 0;
}