#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] >= k) count++;
    }
    cout << count << '\n';
    return 0;
}