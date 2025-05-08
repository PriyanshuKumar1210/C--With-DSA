#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){

    int pivot = arr[end];

    int i=start-1;

    for(int j=start;j<=end;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;
    swap(arr[i],arr[end]);
    return i;
}

void quickSort(int arr[],int start,int end){

    if(start>=end){
        return;
    }

    int pivotIdx = partition(arr,start,end);
    quickSort(arr,start,pivot-1);//left part
    quickSort(arr,pivot+1,end);//right part
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {6,3,5,4,7,2};
    int n=6;
    quickSort(arr,0,n-1);
    printArr(arr,n);
    return 0;
}
