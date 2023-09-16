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

//Printing is recursive (not level order)
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