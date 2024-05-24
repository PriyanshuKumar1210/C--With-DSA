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
               // cout<<"minidx i "<<i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx = j; // minidx updated when if condition becomes true 
             //   cout<<"\n minidx "<<minidx<<endl;
            }   
        }
        swap(arr[i],arr[minidx]);
        
      
    }
        cout<<"\n Sorted Array : ";
          printArray(arr,n);
}
int main(){
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr)/sizeof(n);
    selectionSort(arr,n);
    return 0;
}