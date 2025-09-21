#include <iostream>
using namespace std;
int main()
{
    int n,m,a;
    cin >>n>>m>>a;

    long long flagstone_n= (n+a-1)/a;
    long long flagstone_m= (m+a-1)/a;

    cout <<flagstone_n *flagstone_m;

    return 0;
}