#include <bits/stdc++.h>
using namespace std;
int main(){
    int matrix[5][5];
    int column,row;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                column =j;
                row =i;
            } 
        }
    }
    cout<<abs(row-2)+abs(column-2)<<endl;
    return 0;
}