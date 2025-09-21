#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    vector <int> likes;
    int i=1;
    while((int)likes.size()<=1000){
        if(i%3!=0 && i%10!=3) likes.push_back(i);
        i++;
    }
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        cout<<likes[x-1]<<endl;
    }
    return 0;
}