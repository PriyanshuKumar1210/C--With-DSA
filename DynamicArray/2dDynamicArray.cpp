#include<iostream>
using namespace std;



int main(){
    int rows,col;
    cout<<"Rows : ";
    cin>>rows;
    cout<<"\n Col :";
    cin>>col;

/* -- allocating the 2d Array -- */
    int* *matrix = new int*[rows]; // creating the 2D array

    for(int i=0;i<rows;i++){

        matrix[i] = new int[col]; //Pointing a column into the row of 2d array

    }
/* --- -- */

/* --- Performed the normal operation --- */

    int x=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
                matrix[i][j] = x;
                cout<<matrix[i][j]<<"  ";
                x++;

        }

        cout<<endl;
    }

    return 0;

}