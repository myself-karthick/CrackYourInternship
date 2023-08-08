class Solution {
public:
    vector<vector<int>> per;
    void permutation(vector<int>& nums, int l, int r)
    {
        if(l==r)
            per.push_back(nums);
        for(int i=l; i<=r; i++)
        {
            swap(nums[l],nums[i]);
            permutation(nums, l+1, r);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        permutation(nums, 0, nums.size()-1);
        return per;
    }
};