// WAP to find the sum of particular row

#include<iostream>
using namespace std;

int main(){
    int row,col,n;
   // int nums[row][col]={{1,4,9},{11,4,3},{2,2,3}};

    cout<<"Enter the numbers of row & column \n";
    cin>>row>>col;
    int nums[row][col];
    cout<<"Enter the elements of matrix \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>nums[i][j];
        }
    }

    cout<<"\n Matrix \n"; 

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n Enter the row no. to find the sum of that row  ";
    cin>>n;

    int i=n-1,sum=0;
    for(int j=0;j<col;j++){
        sum += nums[i][j];
    }

    cout<<"\n Sum : "<<sum<<"\n";
    return 0;
}