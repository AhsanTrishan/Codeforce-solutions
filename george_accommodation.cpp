#include <iostream>
int main()
{
    int n,p,q;
    int count =0;
    std::cin>> n;
    for (int i=0; i<n; i++){
        std::cin >> p >>q;
        if ((p+2)<=q){
            count++;
        }
    }
    std::cout<<count<<'\n';

    return 0;
}