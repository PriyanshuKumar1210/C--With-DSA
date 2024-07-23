#include<iostream>
#include<cmath>

using namespace std;

int findPower(int x,int n){

    int halfPow = pow(x,n/2);
    int halfPowSquare = halfPow * halfPow ;
    
    if(n%2!=0){
        return x*halfPowSquare;
    }

        return halfPowSquare;
}

int main(){
    int x=2,n=5;
    cout<<findPower(x,n)<<endl;
    return 0;
}