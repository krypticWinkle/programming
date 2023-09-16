#include<bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

int height(BinaryTreeNode<int>* root)
{
    if(root == NULL)return 0;
    return 1+max(height(root->left), height(root->right));
}
    
void getleaf(BinaryTreeNode<int>* root, int h, int &ans)
{
    if(root == NULL)return;
    
    if(h == 1)
    {
        ans = root->data;
        return;
    }
    else if(h > 1)
    {
        getleaf(root->right, h-1, ans);
        getleaf(root->left, h-1, ans);
        
    }
}
int findBottomLeftValue(BinaryTreeNode<int>* root) 
{
    int ans;
    int h = height(root);
    getleaf(root, h, ans);
    
    return ans;
}