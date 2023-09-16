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


int maxDepth(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return 0;
    }
    //int h = 0;
    //int l_ch_height = maxDepth(root->left);
    //int r_ch_height = maxDepth(root->right);
    //int m = max(l_ch_height, r_ch_height);
    //if(m > h)
    //{
        //  h = m;
    //}
    //h += 1;
    //return h;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
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

    cout<<maxDepth(root);

    
    return 0;
}