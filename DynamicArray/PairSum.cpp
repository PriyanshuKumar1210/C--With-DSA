
/* leetcode problem no 176 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{
/*
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
    return ans;*/

  
        vector <int> answer;
        int n = vec.size()-1;
        
        for(int i=0;i<n;i++){
            int currSum =0;
            for(int j=i+1;i<n;j++){
                   currSum = vec[i]+vec[j]; 

                   if(currSum==target){
                        answer.push_back(i);
                        answer.push_back(j);
                        return answer;
                    }
            }
        }
        return answer; 
    

}

int main()
{

    vector<int> vec = {2,6,7,15};
    int target = 9;
    vector<int> res ;
     res = pairSum(vec, target);
    cout << " " << res[0] <<" , " <<res[1]<< endl;
    return 0;
}