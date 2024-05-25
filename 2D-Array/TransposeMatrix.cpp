#include<iostream>
using namespace std;

int main(){
    int row = 2,col=3;
    int mat[row][col] = {{1,2,3},{4,5,6}};

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int trans[col][row] ;
// transpose
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            trans[j][i] = mat[i][j];
        }
    }
    
    cout<<"Transpose matrix \n";

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }


}