#include<iostream>
using namespace std;
int setIthBit(int n,int i){

        int bitMax = 1 <<i;

        return (n | bitMax);
}

int main(){
    int n=6,i=3;
    cout<<setIthBit(n,i)<<endl;
}