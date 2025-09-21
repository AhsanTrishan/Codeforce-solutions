#include <bits/stdc++.h>
using namespace std;
int main() {
    string anton;
    getline(cin, anton);
    set<char> niton;
    for (int i = 0; i < anton.length(); i++) {
        if (isalpha(anton[i])) {
            niton.insert(anton[i]);
        }
    }
    cout << niton.size() << endl;
    return 0;
}