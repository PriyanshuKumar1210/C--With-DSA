#include<iostream>
using namespace std;

bool checkEven(int n){
    if((n^1)==(n+1))
        return true;
    else
        return false;
}

int main(){
    int n=7;
    bool res = checkEven(n);
    if(res)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
    return 0;
}