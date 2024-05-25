#include<iostream>
using namespace std;

void function(int (*mat)[4],int n,int m){
    cout<<"0th row ptr"<<mat<<endl;
    cout<<"1th row ptr"<<&mat+1<<endl;
     cout<<"1th row ptr"<<mat+1<<endl;
      cout<<"1th row ptr"<<&mat+1<<endl;


      cout<<"value of 0th row "<<*mat<<endl;
      cout<<"value of 1th row "<<*(mat+1)<<endl;    // ptr & value are same 

      cout<<"mat [i][j] value "<<*(*(mat+2) +2 )<<endl;

      /* Internally mat[i][j] works like as a *(*(mat+i) +j */
}

int main(){
     int mat[4][4] ={ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} }; 
     function(mat,4,4);
     return 0;
}