#include <bits/stdc++.h>
using namespace std;
int main() {
    int year; cin >> year;
    year++;
    while (true) {
        string y = to_string(year);
        bool hasDuplicate = false;
        for (int i = 0; i < y.length(); i++) {
            for (int j = i + 1; j < y.length(); j++) {
                if (y[i] == y[j]) {
                    hasDuplicate = true;
                    break;
                }
            }
            if (hasDuplicate) break;
        }
        if (!hasDuplicate) break;
        year++;
    }
    cout << year << endl;
    return 0;
}