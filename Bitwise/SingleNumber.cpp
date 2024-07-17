#include<iostream>
using namespace std;

int findSingle(int *nums,int n){
    
    int res=0;

    for(int i=0;i<n;i++){
         res = res ^ nums[i];
        
    }

    return res;

}

int main(){
    int nums[] = {4,1,2,1,2};
    int n = sizeof(nums)/sizeof(int);

    int res = findSingle(nums,n);

     cout<<res<<endl;
}