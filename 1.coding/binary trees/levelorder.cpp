int height(TreeNode* root)
{
    if(root == NULL)return 0;
    return 1+ max(height(root->left), height(root->right));
}

vector<int> curLevel(TreeNode* root, int h, vector<int>&a)
{
    if(root == NULL)
        return a;
    if(h == 1)
    {
        a.push_back(root->val);
        //return a;
    }
    else if(h > 1)
    {
        curLevel(root->left, h-1, a);
        curLevel(root->right, h-1, a);
    }
    return a;
}
vector<vector<int>> levelOrder(TreeNode* root) 
{
    vector<vector<int>> ans;
    int h = height(root);
    for(int i=1; i<=h; i++)
    {
        vector<int>a;
        curLevel(root, i, a);
        ans.push_back(a);
    }
    return ans;
    
}