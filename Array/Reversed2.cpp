// Reverse an array without the extra space by using it uses the same memory allocation  

#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    //int arr[] = {2,3,45,6,8};[4,5,6,7,0,1,2]
    int arr[] = {0,1,2,4,5,6,7};

    int n = sizeof(arr)/sizeof(int);
    int start = 0,end = n-1;

// Swapping the array elements from last to first index (n-1 to 0 )
    while(start<end){
        int temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;     

    }
   
   printArray(arr,n);
    return 0;
}