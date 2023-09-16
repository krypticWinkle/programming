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

class List
{
    public:
        int val;
        List * next;
    List(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void flatten(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    BinaryTreeNode<int>* right_node = root->right;
    BinaryTreeNode<int>* left_node = root->left;

    flatten(left_node);
    flatten(right_node);
    
    root->left = NULL;
    root->right = left_node;

    BinaryTreeNode<int>* temp = left_node;
    while(temp->right!=NULL)
    {
        temp = temp->right;
    }
    temp->right = right_node;
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
    flatten(root);


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

/*
List * node = flatten(root ->left);
    List * node1 = new List(root->data);
    node1 ->next = node;
    node ->next = flatten(root ->right);

    return node;
    // node ->next = new List(root ->data);
    // List * node2 = flatten(root ->right);
*/

/*
void flatten(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        static TreeNode* temp = NULL;
        //static TreeNode* head = root;
        if(temp == NULL)
        {
            temp = root;
        }
        else
        {
            temp ->right = root;
            temp = temp->right;
        }
        temp->left = NULL;
        flatten(root->left);
        flatten(root->right);
        return;
    }*/

/*
BinaryTreeNode<int> * flatten(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return NULL;
    }
    static BinaryTreeNode<int>* temp = NULL;
    static BinaryTreeNode<int>* head;
    
    if(temp == NULL)
    {
        temp = new BinaryTreeNode<int>(root->data);
        head = temp;
    }
    else
    {
        temp ->right = new BinaryTreeNode<int>(root->data);
        temp = temp->right;
    }
    temp->left = NULL;
    flatten(root->left);
    flatten(root->right);

    return head;
}*/   

/*
void flatten(BinaryTreeNode<int>* root)
{
    if(root==NULL || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    static BinaryTreeNode<int>* temp = NULL;
    BinaryTreeNode<int>* right_node = root->right;
    BinaryTreeNode<int>* left_node = root->left;

    root->left = NULL;
    if(left_node!=NULL)
    {
        root->right = left_node;
    }
    if(temp == NULL)
    {
        temp = root->right;
    }
    else if(temp->right != NULL)
    {
        temp = temp->right;
    }

    flatten(temp);
    while(temp->right != NULL)
    {
        temp->right = right_node;
        temp = temp->right;
    }

    //root->right->right = right_node;
    //return head;
}*/