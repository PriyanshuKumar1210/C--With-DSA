#include<iostream>
using namespace std;

int xorBeauty(int *nums,int n){
    
    int res=0,val1=0,val2=0;

    for(int i=0;i<n;i++){
            val1 = val1 | nums[i];
            val2 = val2 ^ nums[i];
        
    }
        res = val1 & val2;

    return res;

}

int main(){
    int nums[] = {1,4};
    int n = sizeof(nums)/sizeof(int);

    int res = xorBeauty(nums,n);

     cout<<res<<endl;
}