#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];//3,4,2,1,5
        int prev = i-1;//1-1=0

       
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
           
        }
         arr[prev+1]=curr;  
         printArray(arr,n);

    }
   // printArray(arr,n);
}


int main(){
    int arr[] = {3,4,2,1,5};
    int n = sizeof(arr)/sizeof(n);
    insertionSort(arr,n);
    return 0;
}