// WAP to find the sum of n natural number
#include <iostream>
using namespace std;

int main(){
    int n=5,sum=0;
    for(int i=0;i<=n;i++){
        sum += i;
    }
    cout<<" Sum : "<<sum;
}