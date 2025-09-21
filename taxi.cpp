#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int one=0,two=0,three=0;
    int taxi=0;
    while(n--){
        int x;cin>>x;
        if(x==1) one++;
        else if(x==2) two++;
        else if(x==3) three++;
        else if(x==4) taxi++;
    }
    int pair=min(three,one);
    taxi+=pair; one-=pair;three-=pair;taxi+=three;
    taxi+=two/2;
    two= two%2;
    if(two){
        taxi++;
        one-=min(2,one);
    }
    if(one>0) taxi+= (one+3)/4;
    cout<<taxi<<endl;
    return 0;
}