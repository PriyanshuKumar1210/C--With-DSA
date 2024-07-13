#include<iostream>
#include<vector>

using namespace std;

// int removeDuplicates(vector<int>& nums) {
//         int count = 0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i] == nums[j]){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }

int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-1 && nums[i] != nums[i+1]){
                // nums[count] =  nums[i]; 
                // count++;
                continue;
            }
            else{
                nums[count] = nums[i];
                count++;
                
            }

        }
            return count;
    }

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    //{1,1,2}
    int res =0;
    int val=3;
    res = removeElement(nums,val);
    cout<<res<<endl;
    return 0;
}