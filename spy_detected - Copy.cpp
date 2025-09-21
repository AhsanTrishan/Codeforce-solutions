#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        int refer=0;
        if(arr[0]==arr[1]||arr[0]==arr[2]) refer=arr[0];
        else refer=arr[1];
        for(int i=0; i<n; i++){
            if(arr[i]!=refer) {
                cout<<i+1<<endl;
                break;
            } 
        }
    }
    return 0;
}