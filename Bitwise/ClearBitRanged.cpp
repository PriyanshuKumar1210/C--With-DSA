#include<iostream>
using namespace std;

int clearBitRanged(int n,int i,int j){
    int a = ~0<<(j+1);
    int b = 1<<(i-1);

    int bitmask = a |b;
 
    return (n&bitmask);
}

int main(){
    int n=31,j=3,i=1;
    cout<<clearBitRanged(n,i,j)<<endl;
    return 0;
}