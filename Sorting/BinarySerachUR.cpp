// Binary Search using Recursion

#include<iostream>
using namespace std;

int binarySearch(int arr[],int st,int end,int n,int key){
    if(st>end){
        return -1;
    }

    //  int mid = (st+end)/2;
     int mid = st+(end-st)/2; //Another way to find the mid term 
   
//    cout<<"mid : "<<mid<<endl;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid]>key){
        return binarySearch(arr,st,mid-1,n,key);
    }
    else{
        return binarySearch(arr,mid+1,end,n,key);
    }
    
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int st=0,n=7;
    int end = n-1,key=5;
    cout<<binarySearch(arr,st,end,n,key)<<endl;
}