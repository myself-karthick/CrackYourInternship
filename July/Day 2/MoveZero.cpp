class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return ;
        int zeroIndex=0, nonZeroIndex=0;
        while(nonZeroIndex<n)
        {
            if(nums[nonZeroIndex]!=0){
                swap(nums[zeroIndex],nums[nonZeroIndex]);
                zeroIndex++;
            }
            nonZeroIndex++;
        }
    }
};