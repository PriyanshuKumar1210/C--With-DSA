#include<iostream>
using namespace std;

void sprialMatrix(int mat[][4],int n,int m){


        int srow = 0,scol=0,erow=n-1,ecol = m-1;
        
            /* srow -> starting row , erow -> ending row , scol -> starting col , ecol->ending col*/

        while(srow<=erow && scol<=ecol){
            
    // For top 

            for(int j=scol;j<=ecol;j++){
                cout<<mat[srow][j]<<"  ";
            }
    // For right
            for(int i=srow+1;i<=erow;i++){
                cout<<mat[i][ecol]<<"  ";
            }
    // For Bottom 
            for(int j=ecol-1;j>=scol;j--){
                cout<<mat[erow][j]<<"  ";
            }
    // For Bottom 
            for(int i=erow-1;i>=srow+1;i--){
                cout<<mat[i][scol]<<"  ";
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        cout<<endl;

}
int main(){

    int mat[4][4] ={ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
    cout<<"Original Matrix :"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sprial Matrix :"<<endl;
    sprialMatrix(mat,4,4);
}