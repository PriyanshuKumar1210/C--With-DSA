#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minidx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }

        }

        swap(arr[i],arr[minidx]);
        printArray(arr,n);
    }
  //  printArray(arr,n);
}
int main(){
    int arr[] = {3,4,2,1,5};
    int n = sizeof(arr)/sizeof(n);
    selectionSort(arr,n);
    return 0;
}