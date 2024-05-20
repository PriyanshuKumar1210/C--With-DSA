/* It is a best techinique that means it is a optimize solution to find the maxsum of subarray


    1,12,123,1234,12345,
    2,23,234,2345,
    3,34,345,
    4,45,
    5,

    the program returns the sum of above value

    1,3,6,10,15,
    2,5,9,14,
    3,7,12,
    4,9,             time complexity = O(n)
    5,
*/

#include <iostream>
#include <limits.h>
using namespace std;

void sumSubArray(int arr[],int n){
    int sum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxsum = max(maxsum,sum);
        if(sum<0){
            sum=0;
        }
        cout<<sum<<",";
    }
        cout<<endl;
        cout<<maxsum;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    sumSubArray(arr, n);
}