#include<iostream>
using namespace std;

int getIthBit(int num,int i){
    int bitmax = 1 <<i;

    if(!(num & bitmax)){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
        cout<<getIthBit(6,2)<<endl;
        return 0;
}