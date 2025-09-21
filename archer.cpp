#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main() {
    allahbhalojanen();
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double p = a/b;
    double q = c/d;

    /*
    basically thura math kora lagbo
    ekjoner miss mane (1-p),(1-q) duijoner miss mane duita gun
    Win probability = p + (duijoner miss) * Win probability again
    W = p(cause age hae marer) + (1-p)(1-q) * W
    shorol koria:
    W - (1-p)(1-q) * W = p
    W * [1 - (1-p)(1-q)] = p
    W = p / [1 - (1-p)(1-q)]
    And 1 - (1-p)(1-q) = p + q - p*q, 
    so:W = p / (p + q - p*q)
    */

    double win = p / (p+q - p*q);
    cout << fixed << setprecision(12) << win << "\n";
}
