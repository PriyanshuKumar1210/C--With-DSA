#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int *arr,int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

        printArray(arr,n);
}

int main(){
    int arr[] = {3,4,2,1,5};
    int n = sizeof(arr)/sizeof(n);
    bubblesort(arr,n);
    return 0;
}