#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int candle,cost;cin>>candle>>cost;
    int wentout= candle;
    int jolse= candle;
    while(wentout>=cost){
    jolse += wentout/cost;
    wentout =wentout/cost+ wentout%cost;
    }
    cout<<jolse<<endl;
    return 0;
}