#include <bits/stdc++.h>
using namespace std;
int main(){
    string one,two;
    cin>>one>>two;
    int result=0;
    int len= one.length();
    for(char &c: one) c=tolower(c);
    for(char &c: two) c=tolower(c);
    for(int i=0;i<len;i++){
        if(one[i]>two[i]) {
            result=1;
            break;
        }
        else if(one[i]<two[i]) {
            result=-1;
            break;
        }
    }
    cout<<result<<endl;
    return 0;
}