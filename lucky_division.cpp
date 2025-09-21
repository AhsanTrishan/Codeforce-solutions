#include <bits/stdc++.h>
using namespace std;
vector<long long> lucky_numbers;
void generateLucky(long long curr, long long n) {
    if (curr > n) return;
    if (curr != 0) lucky_numbers.push_back(curr);
    generateLucky(curr * 10 + 4, n);
    generateLucky(curr * 10 + 7, n);
}
int main() {
    long long n;cin >> n;
    generateLucky(0, n);
    for (long long x : lucky_numbers) {
        if (n % x == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}