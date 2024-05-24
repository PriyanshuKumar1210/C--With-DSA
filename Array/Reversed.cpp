// Reverse an array with the extra space 

#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr [] = {2,3,4,5,9};
       // int n = sizeof(int);
    int n = sizeof(arr)/sizeof(int);    // It returns the number of elements in an array

    cout<<"size of Array : "<<n<<endl;

    int copyArr[n]; // creating a copy array with size n which is equal to original array
// copy the array elements to the another array
    for(int i=0;i<n;i++){
        int j= n-i-1;
        for(int i=0;i<n;i++){
            copyArr[i] = arr[j];
        }
    }

// Copy the array elements into the origianl array
    for(int i=0;i<n;i++){
       copyArr[i] = arr[i];
      // arr[i] = copyArr[i];
    }

    printArray(arr,n);
    return 0;
}