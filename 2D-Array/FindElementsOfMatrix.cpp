#include<iostream>
using namespace std;

void find(int (*mat)[4],int n,int m){

    int count =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]== 7)
               
              count ++;
               
        }
    }
    cout<<count;
}

int main(){
     int mat[4][4] ={ {1,2,3,4},{5,6,7,8},{9,10,17,7},{13,14,15,16} }; 
     find(mat,4,4);
     return 0;
}