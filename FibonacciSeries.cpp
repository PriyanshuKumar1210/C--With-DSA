//  Fibonacci series using recursion

#include<iostream>
using namespace std;

int fibo(int n){
    
    if(n==0 || n==1){
            return n;
    }   
     
    int sum = fibo(n-1) + fibo(n-2); 
    return sum;
    
}

int main(){
    int n=7;
    cout<<fibo(n)<<endl;
    return 0;
}