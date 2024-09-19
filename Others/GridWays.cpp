#include<iostream>
using namespace std;


int ways(int currRow,int currCol,int row,int col){
//Base case1
    if(currRow == row-1 && currCol == col-1){
        return 1;
    }
//Base case2

    if(currRow>=row || currCol >= col){
        return 0;
    }
    int value1 = ways(currRow,currCol+1,row,col);//right
    int value2 = ways(currRow+1,currCol,row,col);//down

    return value1+value2;
}
int main(){
    int n=3,m=3;
    cout<<ways(0,0,n,m)<<endl;
    return 0;
}