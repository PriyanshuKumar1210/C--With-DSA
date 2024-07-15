#include<iostream>
using namespace std;

int clearIthBit(int n,int i){
    int bitMax = ~(1 <<i);

    return (n & bitMax);
}

int main(){
    int n=6,i=1;
    cout<<clearIthBit(n,i)<<endl;
    return 0;
}