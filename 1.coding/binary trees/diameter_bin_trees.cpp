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

//total_node counting is recursive (not level order)
int diameter(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int op1 = maxDepth(root->left) + maxDepth(root->right);//left + right height of the root
    int op2 = diameter(root->left);//calling diameter function for the left child of the root
    int op3 = diameter(root->right);//calling diameter function for the right child of the root

    return max(op1, max(op2, op3));

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

    cout<<diameter(root)<<"\n";

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