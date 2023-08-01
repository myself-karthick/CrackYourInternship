// Link : https://leetcode.com/problems/all-possible-full-binary-trees/description/
class Solution {
public:
    vector<vector<TreeNode*>>dp;
    vector<TreeNode*> solve(int n)
    {       
        
        if(n % 2 == 0)
            return {};
        if(dp[n].size()!=0)
        return dp[n];
        
        if(n == 1)    
        {
            TreeNode* new_node = new TreeNode(0);
            return {new_node};
        }
        vector<TreeNode*> res;
        for(int i = 1; i < n; i+=2)
        {
            vector<TreeNode*>left = solve(i);
            vector<TreeNode*>right = solve(n - i - 1);
            for( TreeNode*l: left)
            {
                for(TreeNode*r : right)
                {
                    TreeNode* root = new TreeNode(0);   
                    root -> left = l;
                    root -> right = r;
                    res.push_back(root);
                }
            }
        }
        return dp[n]=res;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        dp.resize(n+1);
        return solve(n);
    }
};