#include<bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

// class BinaryTreeNode
// {
//     public:
//     int data;
//     int *left, *right;
//     BinaryTreeNode(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

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

//printLeftView
void printLeftView(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return;
    }
    Queue q;
    q.add(root);
    while(q.isEmpty() == false)
    {
        int size = q.rear + 1;
        cout<<root->data<<" ";
        while(size>0)
        {
            if(root->left != NULL)q.add(root->left);
            if(root->right != NULL)q.add(root->right);
            size--;
        }
    }
}


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

    printLeftView(root);

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