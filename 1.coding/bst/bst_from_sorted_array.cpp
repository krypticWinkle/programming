#include<bits/stdc++.h>
#include "BinaryTreeNode.h"

using namespace std;

//validating a binary search tree
BinaryTreeNode<int>* formBST(int* sorted_array, int st, int end)
{
    if(st>end)
    {
        return NULL;
    }
    int mid = (st+end)/2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int> (sorted_array[mid]);
    root ->left = formBST(sorted_array, st, mid-1);
    root ->right = formBST(sorted_array, mid+1, end);

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

// int* takeInput(int size)
// {
//     int sorted_array[size];
//     for(int i=0; i<size; i++)
//     {
//         cin>>sorted_array[i];
//     }
//     return sorted_array;
// }

int main()
{
    int size; cin>>size;
    //int* array = takeInput(size);
    int sorted_array[size];
    for(int i=0; i<size; i++)
    {
        cin>>sorted_array[i];
    }
    BinaryTreeNode<int>* root = formBST(sorted_array, 0, size-1);
    print(root);
    return 0;
}