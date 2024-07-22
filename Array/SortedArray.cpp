#include<iostream>
using namespace std;

bool isSorted(int arr[],int n,int i){

        if(n==i-1)
            return true;
        
        if(arr[i]>arr[i+1]){
            return false;
        }

        isSorted(arr,n,i+1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int arr2[] = {5,4,6,2,1};
    cout<<isSorted(arr,5,0)<<endl;
    cout<<isSorted(arr2,5,0)<<endl;
    return 0;

}