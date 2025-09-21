#include <bits/stdc++.h>
using namespace std;
int main(){
    string player; cin >> player;
    int count = 1;
    for(int i = 1; i < player.length(); i++){
        if(player[i] == player[i-1]){
            count++;
            if(count >= 7){
                cout << "YES\n";
                return 0;
            }
        }
        else {
            count = 1;
        }
    }
    cout << "NO\n";
    return 0;
}
