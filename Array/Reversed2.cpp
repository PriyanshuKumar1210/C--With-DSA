// Reverse an array without the extra space 

#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[] = {2,3,45,6};

    int n = sizeof(arr)/sizeof(int);
    int start = 0,end = n-1;

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