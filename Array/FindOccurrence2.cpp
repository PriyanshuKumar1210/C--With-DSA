// Finding the occurence of repeated element in array using recursion 
#include<iostream>
using namespace std;

void findOccurence(int arr[],int i,int key){
    int n=9;
    if(i==n){
        return;
    }

    if(arr[i] == key){
        cout<<i<<endl;
    }
    findOccurence(arr,i+1,key);
}

int main(){
    int arr[] = {3,2,4,3,6,2,7,2,2};
    int n=0,key=3;
    findOccurence(arr,n,key);
    return 0;
}