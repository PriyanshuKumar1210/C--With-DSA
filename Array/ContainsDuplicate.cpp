#include<iostream>
using namespace std;

bool duplicate(int *arr,int n){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }

    if(count>=2){
        return true; 
    }

        return false;
}

int main(){
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    // int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    bool flag = duplicate(arr,n);

    if(flag){
        cout<<flag<<endl;
    }
    else{
        cout<<flag<<endl;
    }

}