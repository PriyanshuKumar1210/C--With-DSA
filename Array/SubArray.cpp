
/* 1,12,123,1234,12345,
2,23,234,2345,
3,34,345,
4,45,
5,
    above example is a subarray , subarray means an array element ehich are continuous from that number which are given.

    i.e :- Subarray is a continuous part of an array
*/

#include <iostream>
using namespace std;

void printSubArray(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end = start;end<=n-1;end++){    /* start ends loops used to print the index of subarray*/
            //    cout<<"( "<< start << ","<<end<<" ) ";
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
                cout<<",";
        }
            cout<<endl;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printSubArray(arr,n);
}
