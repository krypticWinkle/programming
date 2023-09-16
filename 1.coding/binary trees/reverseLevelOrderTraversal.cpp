//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

int height(TreeNode* root)
    {
        if(root == NULL)return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    
    void reverseLevelOrder(TreeNode* root, vector<vector<int>>&ans, int h)
    {
        if(root == NULL)return;
        ans[h].push_back(root->val);
        reverseLevelOrder(root->left, ans, h-1);
        reverseLevelOrder(root->right, ans, h-1);
        
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        int h = height(root);
        vector<vector<int>>ans(h);
        
        reverseLevelOrder(root, ans, h-1);
        
        return ans;
    }