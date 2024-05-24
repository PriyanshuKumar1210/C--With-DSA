#include<iostream>
using namespace std;

int search(int mat[][4],int n,int m,int key){
    int row=0,col=m-1;
    
     while(row<n && col >=0){
        if(mat[row][col]==key)
            return 1;

        else if(mat[row][col]<key)
            row++;
        else
            col--;
     }
        return -1;
}

int main(){
    int mat[4][4] ={ {10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50} }; 
    int key =33,n=4,m=4;    /*n = no. of rows , m = no. of column */
    int res = search(mat,n,m,key);
 //   cout<<"Res "<<res<<endl;
    if(res==1){
        cout<<" Key is found in the array : \n ";
    }
    else{
        cout<<"Not Found \n";
    }
}