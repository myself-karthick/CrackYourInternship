// Link : https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> arr;
        for(int i=0; i<nums.size(); i++)
        {
            int diff= target-nums[i];
            if(arr.find(diff)!=arr.end() && arr.find(diff)->second!=i)
            {
                return {i,arr[diff]};
            }
            arr[nums[i]]=i;
        }


        return {-1,-1};
    }
};