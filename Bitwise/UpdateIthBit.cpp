#include<iostream>
using namespace std;

int updateithBit(int n,int i,int val){
    int bitmask = ~(1<<i);
    n = n&bitmask; //clear the ith bit

    n = n | val<<i;

    return n;
}

int main(){
    int n=7,i=3,val=1;
    int res = updateithBit(n,i,val);
    cout<<res<<endl;
}