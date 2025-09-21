#include <bits/stdc++.h>
using namespace std;

void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve() {
    int n,k; cin>>n>>k;
    vector<int> tower(n);
    for(int i=0;i<n;i++) cin>>tower[i];
    
    int currentHeight = tower[k-1];
    int timePassed = 0;
    bool possible = false;

    vector<int> sortedTower = tower;
    sort(sortedTower.begin(), sortedTower.end());

    for(int i=0;i<n;i++) {
        if (sortedTower[i]<currentHeight) continue;
        int travelTime = sortedTower[i] - currentHeight;
        timePassed += travelTime;

        if (currentHeight < timePassed) {
            possible = false;
            break;
        }

        currentHeight = sortedTower[i];
        if (currentHeight == sortedTower[n-1]) {
            possible = true;
            break;
        }
    }

    if (currentHeight == *max_element(tower.begin(), tower.end())) cout <<"YES\n";
    else cout << "NO\n";
}

int main() {
    allahbhalojanen();
    int t;cin>>t;
    while (t--) solve();
    return 0;
}