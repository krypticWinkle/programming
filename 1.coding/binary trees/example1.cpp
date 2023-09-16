#include<bits/stdc++.h>
#include "BinaryTreeNode.h"

using namespace std;

void print(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<":";
    if(root->left != NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if(root->right != NULL)
    {
        cout<<"R"<<root->right->data;
    }
    cout<<"\n";
    print(root->left);
    print(root->right);
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
    /*BinaryTreeNode<int> * root = new BinaryTreeNode<int> (1);
    BinaryTreeNode<int> * node1 = new BinaryTreeNode<int> (2);
    BinaryTreeNode<int> * node2 = new BinaryTreeNode<int> (3);

    root->left = node1;
    root->right = node2;*/

    BinaryTreeNode<int> * root = takeInput();

    print(root);

    
    return 0;
}