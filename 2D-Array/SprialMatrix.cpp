#include<iostream>
using namespace std;

void sprialMatrix(int mat[][4],int n,int m){
    int sr=0,sc=0;
    int er = n-1,ec = m-1;

//for top 
    for(int i=sr;i<=ec;i++){
        cout<<mat[i][sr];
    }
// for right
    for(int j=sr+1;j<=er;j++){
        cout<<mat[ec][j];
    }
// for bottom
    for(int i=ec-1;i>=er;i--){
        cout<<mat[i][er];
    }

// for left
    for(int j=er-1;j>sr+1;j--){
        cout<<mat[sc][j];
    }
    cout<<endl;
}

int main(){

    int mat[4][4] ={ {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    sprialMatrix(mat,4,4);
}