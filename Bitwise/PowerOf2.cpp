#include<iostream>
using namespace std;

bool findpower(int num){
    int n;

    if (!(num & (num-1))){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int n=31;
    bool res = findpower(n);
    if(res)
        cout<<"Power of 2"<<endl;
    else
        cout<<"Not a power of 2"<<endl;
    return 0;
}