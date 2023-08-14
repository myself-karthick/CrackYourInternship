// Link : https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int n=nums.size();
        if(n==1)
            return nums[0];
        priority_queue<int> arr;
        for(int i=0; i<n; i++)
        {
            arr.push(nums[i]);
        }
        while(--k){
            arr.pop();
        }
        return arr.top();
    }
};