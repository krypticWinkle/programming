#include<bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;
//this: https://leetcode.com/problems/binary-tree-right-side-view/
//suggestion: https://leetcode.com/problems/boundary-of-binary-tree/
void findBottomLeftValue(BinaryTreeNode<int>* root, int& maxDepth, vector<int>&ans, int depth) 
{
    if (root == NULL)
        return;
        
    if (depth > maxDepth) 
    {
        maxDepth = depth;
        ans.push_back(root->data);
    }
    //Go to the left and right of each node 
    findBottomLeftValue(root->right, maxDepth, ans, depth+1);
    findBottomLeftValue(root->left, maxDepth, ans, depth+1);
    
    
}
    
vector<int> rightSideView(BinaryTreeNode<int>* root) 
{
    int maxDepth = 0;
    vector<int>ans;
    if(root != NULL)
        ans.push_back(root->data);
    
    findBottomLeftValue(root, maxDepth, ans, 0);
    
    return ans;
}

int main()
{
    return 0;
}