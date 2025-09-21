#include <bits/stdc++.h>
using namespace std;
void allahbhalojanen(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
}    
int main(){
    allahbhalojanen();
    int t;cin>>t;
    while(t--){
        bool broken= false;
        int n;cin>>n;
        vector<int> a(n),taken;
        string ans="";
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(taken.empty()){
                taken.push_back(a[i]);
                ans.push_back('1');
            }
            else{
                if(broken){
                    if(a[i]<taken.back()){
                        ans.push_back('0');
                    }
                    else{
                        if(a[i]>taken[0]){
                            ans.push_back('0');
                        }
                        else{
                            ans.push_back('1');
                            taken.push_back(a[i]);
                        }
                    }

                }
                else{
                    if(a[i]>=taken.back()){
                        taken.push_back(a[i]);
                        ans.push_back('1');
                    }
                    else{
                        if(a[i]>taken[0]){
                            ans.push_back('0');
                        }
                        else{
                            broken=true;
                            ans.push_back('1');
                            taken.push_back(a[i]);
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}