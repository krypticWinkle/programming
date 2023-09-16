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

int findMax(BinaryTreeNode<int>* root)
{
    if (root == NULL)
	{
    	return INT32_MIN;
    }

	int l_ch_max = findMax(root->left);
    if(root->data > l_ch_max)
    {
        l_ch_max = root->data;
    }
    int r_ch_max = findMax(root->right);
    if(root->data > r_ch_max)
    {
        r_ch_max = root->data;
    }

    return max(l_ch_max, r_ch_max);
}

int findMin(BinaryTreeNode<int>* root)
{
    if (root == NULL)
	{
    	return INT32_MAX;
    }

	int l_ch_min = findMin(root->left);
    if(root->data < l_ch_min)
    {
        l_ch_min = root->data;
    }
    int r_ch_min = findMin(root->right);
    if(root->data < r_ch_min)
    {
        r_ch_min = root->data;
    }

    return min(l_ch_min, r_ch_min);
}

//validating a binary search tree
bool isValidBST(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return true;
    }
    if(isValidBST(root ->left) && root ->data > findMax(root ->left) && isValidBST(root ->right) && root ->data <= findMin(root ->right))
    {
        return true;
    }
    
    // if(root ->data > findMax(root ->left)  &&  root ->data <= findMin(root ->right))
    // {
    //     return true;
    // }
    return false;
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

    cout<<isValidBST(root)<<"\n";
    cout<<findMin(root)<<"\n";
    cout<<findMax(root)<<"\n";

    return 0;
}
//4 3 6 1 -1 5 7 -1 -1 -1 -1 -1 -1

/*

            4
          /   \
         3     6
       /     /   \
      1     5     7


// 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
            1
        /       \
       2         3
     /  \      /   \
    4    5    6     7
        / \
       8   9

*/