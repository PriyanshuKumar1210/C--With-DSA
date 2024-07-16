#include<iostream>
using namespace std;

int countBits(int n){

    int count =0;

    while(n>0){
        int lastDigit = n & 1;
        count += lastDigit;
        n = n>>1;
    }
        return count;
}

int main(){
    int n=10;
    int res = countBits(n);
    cout<<res<<endl;
    return 0;
}