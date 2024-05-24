#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotated(int *arr,int n){
   
    int start = 0,end = n-1;

         while(start<end){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;     
            }
 
   
    printArray(arr,n);
}

int main(){
    int arr[] = {0,1,2,4,5,6,7};
    int n=7;
    rotated(arr,n);
}