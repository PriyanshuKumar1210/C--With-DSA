#include<iostream>
using namespace std;

int friendPairing(int n){
    if(n==1 || n==2){
        return n;
    }
    //For Single pair
    int res1 = friendPairing(n-1);
    //For two pair 
    /*
        ABC -> 
     */
    int res2 = (n-1)*friendPairing(n-2);

    return res1+res2;
}

int main(){
    cout<<friendPairing(3)<<endl;
    return 0;
}