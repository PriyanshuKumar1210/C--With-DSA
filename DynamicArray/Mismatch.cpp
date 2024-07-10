#include <iostream>
#include <vector>
using namespace std;


vector<int> findErrorNos(vector<int> vec)
{

    vector<int> ans;
    int dup,mis;
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]==vec[i+1]){
                dup = vec[i];
                cout<<"Duplicate : "<<dup<<endl;
                mis = dup++;
                cout<<"Miss : "<<mis<<endl;
                ans.push_back(i);
                ans.push_back(i+1);
                return ans;
        }
    }

/*
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i+1; j < vec.size() - 1; j++)
        {
            if (vec[i] == vec[j])
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            // else{
            //     continue;
            // }
        }
    }*/
    return ans;
}

/*
vector<int> findErrorNos(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    vector<bool> isPresent(n + 1, false);
    cout<<isPresent[0];
    cout<<isPresent[1]<<endl;

    for (int i = 0; i < n; i++)
    {
        if (isPresent[nums[i]])
        {
            ans.push_back(nums[i]);
            cout<<ans[0]<<endl;
            cout<<ans[1];
        }
        isPresent[nums[i]] = true;
    }
    for (int i = 1; i < isPresent.size(); i++)
    {
        if (!isPresent[i])
        {
            ans.push_back(i);
            cout<<ans[0]<<endl;
            cout<<ans[1];
            break;
        }
    }
    return ans;
}*/
int main()
{
    vector<int> vec = {1, 2, 2, 4};
    vector<int> res;
    res = findErrorNos(vec);
    cout << res[0] << endl;
    cout << res[1] << endl;
    return 0;
}