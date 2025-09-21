#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n; cin >> n;
    if(n>=0)  cout<<n<<endl;
    else {
        int opt1 = n / 10;
        int last_digit = abs(n % 10);
        int opt2 = (n/100) *10 - last_digit; 
        cout <<max(opt1, opt2)<< endl; 
    }
    return 0;
}
