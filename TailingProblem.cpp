// Tailing Problem using recursion

#include<iostream>
using namespace std;

int tailingProblem(int n){

    if(n==0 || n==1){
        return 1;
    }
//Vertical
    int res1 = tailingProblem(n-1);
//Horizontal
    int res2 = tailingProblem(n-2);

    return res1+res2;
}

int main(){
    int n=4;
    cout<<tailingProblem(n)<<endl;
    return 0;
}