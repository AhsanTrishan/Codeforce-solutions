#include <bits/stdc++.h>
using namespace std;
int main() {
    string a; cin>>a;
    bool firstletter=islower(a[0]);
    bool restupper=true;
    bool allupper=true;
    for(int i=0;i<a.length();i++){
        if(!isupper(a[i])) allupper=false;
        if(i>0 && !isupper(a[i])) restupper=false;//prothom ta chuto ar baki shob boro check korram
    }
   if (allupper) {
        for (char &c : a) c = tolower(c);
    }
    
    else if (firstletter && restupper) {
        for (char &c : a) c = tolower(c);
        a[0] = toupper(a[0]);
    }
    cout<<a<<endl;
    return 0;
}