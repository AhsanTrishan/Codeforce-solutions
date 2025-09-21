#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int n,a,b,c;cin>>n>>a>>b>>c;
    int ans=0;
    //check kormu ax+by+cz=n ilan eqn diya jen z er maan kita
    for(int x=0; x<=4000; x++){
        for(int y=0; y<=4000; y++){

            int zc = n-(a*x + b*y);
            if(zc<0) break;

            double z= (zc/ (double)c);
            if(z==(int)z) {
                ans=max(ans, (int)z+x+y);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}