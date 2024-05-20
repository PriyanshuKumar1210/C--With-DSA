/* It is a brutforce but optimize than the MaxSumSubArray techinique that means it is not a optimize solution 


    1,12,123,1234,12345,            
    2,23,234,2345,
    3,34,345,
    4,45,
    5,

    the program returns the sum of above value

    1,3,6,10,15,
    2,5,9,14,
    3,7,12,
    4,9,
    5,              time complexity = O(n^2)
*/

#include <iostream>
#include <limits.h>
using namespace std;

void sumSubArray(int *arr,int n){
        int maxSum = INT_MIN;
        for(int start=0;start<n;start++){
                int sum=0;

            for(int end=start;end<n;end++){
                sum +=arr[end];
                maxSum = max(maxSum,sum);
                cout<<sum<<",";     // print the sum of every subaaray index
            }
                cout<<endl;
              
        }
           
            cout<<maxSum;       // It print the maximum value which belongs into the sum

}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(n);
    sumSubArray(arr,n);
}