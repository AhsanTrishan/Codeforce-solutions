#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n;cin>>n;
    vector <int> card(n);
    for(int i=0; i<n; i++) cin>>card[i];
    int first=0,second=0;
    int i=0,j=n-1; bool sereja=true;
    while(i<=j){
        if(sereja){
            first += (card[i]>card[j]) ? card[i++] : card[j--];
        }
        else{
            second += (card[i]>card[j]) ? card[i++] : card[j--];
        }
        sereja = !sereja;
    }
    cout<<first<<" "<<second<<'\n';
    return 0;
}