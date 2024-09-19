/* Time Complexity = O(2 the power of(n+m))*/

#include<iostream>
using namespace std;

int gridWays(int currRow,int currCol,int row,int col,string ans){

    if(currRow == row-1 && currCol == col-1){
        cout<<ans<<"\n";
        return 1;
    }
    if(currRow >= row || currCol >= col){
        return 0;
    }
    
    //right
    int value1 = gridWays(currRow,currCol+1,row,col,ans+'R');

    // downward
    int value2 = gridWays(currRow+1,currCol,row,col,ans+'D');

    return value1+value2;
}

int main(){
    int row=3,col=3;
    string ans = " ";
    cout<<gridWays(0,0,row,col,ans)<<endl;
    return 0;
}