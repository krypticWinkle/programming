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
int total_nodes(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int count = 0;

    if(root->left!= NULL)
    {
        count += total_nodes(root->left);
    }
    if(root->right != NULL)  
    {
        count += total_nodes(root->right);
    }
    count+=1;

    return count;
}
//NINJA APPROACH
// int total_nodes(BinaryTreeNode<int>* root) 
// {
//     if(root == NULL)
//     {
//         return 0;
//     }
    
//     return 1 + total_nodes(root->right) + total_nodes(root->left);
// }

// Level order Input
BinaryTreeNode<int>* takeInput()
{
    class Queue q1;
    int rootD;
    cin>>rootD;
    if(rootD == -1)
    {
        return nullptr;
    }
    BinaryTreeNode<int>* roott = new BinaryTreeNode<int>(rootD);
    q1.add(roott);

    while(q1.isEmpty() == false)
    {
        BinaryTreeNode<int>* root = q1.peek();
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1)
        {
            BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int> (leftChildData);
            q1.add(leftChild);
            root->left = leftChild;
        }

        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1)
        {
            BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int> (rightChildData);
            q1.add(rightChild);
            root->right = rightChild;
        }

        q1.remove();
    }

    return roott;
}

int main()
{
    BinaryTreeNode<int> * root = takeInput();

    cout<<total_nodes(root)<<"\n";

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