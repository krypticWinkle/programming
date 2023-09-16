#include<bits/stdc++.h>
#include "treenode.h"
using namespace std;

Treenode<int>* takeInput()
{
    int rootData;
    cout<<"Enter Data\n";
    cin>>rootData;
    Treenode<int>* root = new Treenode<int>(rootData);

    int n;
    cout<<"Enter no of children of "<<rootData<<"\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        Treenode<int>*child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

// void printTree(Treenode <int>* root)
// {
//     cout<<root->data<<"\n";
//     for(int i=0; i<root->children.size(); i++)
//     {
//         printTree(root->children[i]);
//     }
// }

void printTre(Treenode <int>* root)
{
    cout<<root->data<<":";
    for(int i=0; i<root->children.size(); i++)
    {
        cout<<root->children[i]->data<<" ";
    }
    cout<<"\n";
    for(int i=0; i<root->children.size(); i++)
    {
        printTre(root->children[i]);
    }
}

void preorder(Treenode <int>* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    for(int i=0; i< root->children.size(); i++)
    {
        preorder(root->children[i]);
    }
}

int main()
{
    // Treenode<int>* root = new Treenode<int>(1);
    // Treenode<int>* node1 = new Treenode<int>(2);
    // Treenode<int>* node2 = new Treenode<int>(3);
    // Treenode<int>* node3 = new Treenode<int>(4);
    // Treenode<int>* node4 = new Treenode<int>(5);
    // Treenode<int>* node5 = new Treenode<int>(6);
    // Treenode<int>* node6 = new Treenode<int>(7);
    
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // node1->children.push_back(node3);
    // node1->children.push_back(node4);
    // node2->children.push_back(node5);
    // node2->children.push_back(node6);

    Treenode<int>* root = takeInput();


    printTre(root);
    //preorder(root);

    //print the tree and make a function to take i/p from user
    return 0;
}