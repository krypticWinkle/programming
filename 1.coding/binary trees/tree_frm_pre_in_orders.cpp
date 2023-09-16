#include<bits/stdc++.h>
#include "BinaryTreeNode.h"

using namespace std;

class Queue
{
    public:
    int front=0, rear=-1;
    vector<BinaryTreeNode<int>*> node_store;

    void add(BinaryTreeNode<int>* root)
    {
        rear++;
        node_store.push_back(root);
    }
    void remove()
    {
        node_store.erase(node_store.begin());
        rear--;
    }
    BinaryTreeNode<int>* peek()
    {
        return node_store[front];
    }
    bool isEmpty()
    {
        if(node_store.size() == 0)
        {
            return true;
        }
        return false;
    }
};

//total_node counting is recursive (not level order)
BinaryTreeNode<int>* form_tree(int* preorder, int* inorder, int inS, int inE, int preS, int preE, int size)
{
    BinaryTreeNode<int> * root = new BinaryTreeNode<int> (preS);
    if(preS == preE)
    {
        return root;
    }
    int i=0;
    while (preorder[0] != inorder[i])
    {
        i++;
    }
    if(i!=0)
    {
        root ->left = form_tree((preorder+1), inorder, inorder[0], inorder[i-1], preorder[1], preorder[i], i);
    }
    //if(i <= size)
    //{
        root ->right = form_tree((preorder+i+1), (inorder+i+1), inorder[i+1], inorder[size-1], preorder[i+1], preorder[size-1], size-i-1);
    //}
    return root;

}

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


int main()
{
    int size;
    cin>>size;
    int preorder[size], inorder[size];
    for(int i=0; i<size; i++)
    {
        cin>>preorder[i];
    }
    for(int i=0; i<size; i++)
    {
        cin>>inorder[i];
    }
    //BinaryTreeNode<int> * root = takeInput();

    BinaryTreeNode<int> * root = form_tree(preorder, inorder, inorder[0], inorder[size-1], preorder[0], preorder[size-1], size);
    print(root);

    return 0;
}
//1 2 3 5 6 -1 -1 -1 -1 8 -1 -1 9 -1 -1

/*
            1
          /   \
         2     3
       /  \
      5    6
          /
          8
           \
            9

// 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
            1
        /       \
       2         3
     /  \      /   \
    4    5    6     7
        / \
       8   9

*/