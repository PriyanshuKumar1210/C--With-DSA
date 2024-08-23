// Time complexity -> O(logn)
#include<iostream>
using namespace std;

int search(int arr[],int start,int end,int tar){

        if(start>end){
            return -1;
        }
        int mid = start+(end-start)/2;

        if(arr[mid] == tar){
            return mid;
        }

        if(arr[start]<=arr[mid]){
            //L1
            if(arr[start] <= tar && tar<=arr[mid]){
                //left half
                return search(arr,start,mid,tar);
            }
            else{
                //right half
                    return search(arr,mid+1,end,tar);
            }
        }
        else{
            //L2
            if(arr[mid]<=tar && tar<=arr[end]){
                //right half
                return search(arr,mid+1,end,tar);
            }
            else{
                // left half
                return search(arr,start,mid,tar);
            }
        }
}

int main(){
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = 7,tar=5;
    cout<<search(arr,0,n-1,tar)<<endl;
    return 0;
}