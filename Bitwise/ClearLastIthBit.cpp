#include<iostream>
using namespace std;

int clearLast(int n,int i){

        int bitmask = ~0<<i;

        n = n & bitmask;

        return n;

}

int main(){
    int n = 15,i=2;
    int res = clearLast(n,i);
    cout<<res<<endl;
    return 0;
}