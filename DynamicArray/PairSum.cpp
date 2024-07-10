
/* leetcode problem no 176 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{

    int start = 0, end = vec.size() - 1;
    vector<int> ans;
    int currSum = 0;

    while (start < end)
    {
        currSum = vec[start] + vec[end];

        if (currSum == target)
        {
            ans.push_back(start);
            ans.push_back(end);

            return ans;
        }

        else if (currSum > target)
        {
            end--;
        }
        else
        { // if(currSum<target)
            start++;
        }
    }
    return ans;
}

int main()
{

    vector<int> vec = {2, 3, 7, 11, 15};
    int target = 9;
    vector<int> res ;
     res = pairSum(vec, target);
    cout << " " << res[0] <<" , " <<res[1]<< endl;
    return 0;
}