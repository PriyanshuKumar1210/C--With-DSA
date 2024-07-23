#include<iostream>
using namespace std;

int findPower(int x,int n){
    
    if(n==0){
        return 1;
    }
    // int power=1;
    // while(n!=0){
    //     power = power * x;
    //     n--;
    // }
   
    return x*findPower(x,n-1);
}

int main(){
    int x=2,n=4;
    cout<<findPower(x,n)<<endl ;
    return 0;
}