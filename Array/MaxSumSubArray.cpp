/* It is a brutforce techinique that means it is not a optimize solution


    1,12,123,1234,12345,
    2,23,234,2345,
    3,34,345,
    4,45,
    5,

    the program returns the sum of above value

    1,3,6,10,15,
    2,5,9,14,
    3,7,12,
    4,9,             time complexity = O(n^3)
    5,
*/

#include <iostream>
#include <limits.h>
using namespace std;

void sumSubArray(int *arr, int n)
{

    int maxsum = INT_MIN; // INT_MIN is a macro which is defined the -∞ (infinity)
    for (int start = 0; start < n; start++)
    {

        for (int end = start; end <= n - 1; end++)
        {
            int currsum = 0;
            for (int i = start; i <= end; i++)
            {
                currsum += arr[i];
            }

            maxsum = max(maxsum, currsum); // max is predefined function which is used to find the maximum no.b/w them

            // Find the maximum using if-else condition

            // if(maxsum>currsum){
            //     maxsum=maxsum;
            // }
            // else{
            //     maxsum=currsum;
            // }
            cout << currsum << ",";
        }
        cout << endl;
    }
    cout << "Maximum : " << maxsum;
}
int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
     int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    sumSubArray(arr, n);
}