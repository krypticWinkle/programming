#include<bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

/* Follow ups 
https://leetcode.com/problems/count-univalue-subtrees/
https://leetcode.com/problems/most-frequent-subtree-sum/
*/
bool isSameTree(BinaryTreeNode<int>* root, BinaryTreeNode<int>* subRoot)
{
    if(root==NULL || subRoot == NULL)
        return (root==NULL && subRoot == NULL);
        
    if(root->data == subRoot->data)
    {
        if(isSameTree(root->left, subRoot->left) && isSameTree(root->right, subRoot->right))
            return true;
        return false;
    }
    return false;
}


bool isSubtree(BinaryTreeNode<int>* root, BinaryTreeNode<int>* subRoot) 
{
    if(root==NULL)return false;
    if(isSameTree(root, subRoot))
        return true;
    else
    {
        return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
    }
    
    return false;
}

//1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 8 -1 -1 -1
BinaryTreeNode<int>* takeInput()
{
    int rootData;
    cin>>rootData;
    if(rootData == -1)
    {
        return nullptr;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();

    root->left = leftChild;
    root->right = rightChild;

    return root;
}

int main()
{
    BinaryTreeNode<int> * root = takeInput();
    BinaryTreeNode<int> * subRoot = takeInput();

    cout<<isSubtree(root, subRoot);
    return 0;
}