//  Longest Subarray of 1's After Deleting One Element
//  https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int countZero =1, l=0, r;
        for(r=0; r<nums.size(); r++)
        {
            if(nums[r]==0)
            {
                countZero--;
            }
            if(countZero<0)
            {
                if(nums[l]==0)
                    countZero++;
                l++;
            }
        }
        return r-l-1;
    }
};