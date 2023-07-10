// Link : https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
class Solution {
    public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int depth = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            depth++;
            for(int i=0 ; i<size; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                if(temp->left==NULL && temp->right==NULL)
                    return depth;
            }
        }
        return depth;
    }
};