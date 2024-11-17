#include<iostream>
using namespace std;

bool search(int arr[],int size,int key,int i){

    if(i==size-1){
        return false;
    }

    if(arr[i] == key){
        return true;
    }
    search(arr,size,key,i+1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int key=10;
    cout<<search(arr,5,key,0)<<endl;
    return 0;
}