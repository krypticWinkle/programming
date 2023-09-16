// C++ program to find maximum of a binary tree
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//int maxi = 0;
// A tree node
class Node {
public:
	int data;
	Node *left, *right;

	Node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

// Returns maximum value in a given  Binary Tree
int findMax(Node* root)
{
	if (root == NULL)
		return 0;

	int l_ch_max = findMax(root->left);
    if(root->data > l_ch_max)
    {
        l_ch_max = root->data;
    }
    int r_ch_max = findMax(root->right);
    if(root->data > l_ch_max)
    {
        r_ch_max = root->data;
    }

    return max(l_ch_max, r_ch_max);
}

// Driver Code
int main()
{
	Node* NewRoot = NULL;
	Node* root = new Node(2);
	root->left = new Node(17);
	root->right = new Node(5);
	root->left->right = new Node(6);
	//root->left->right->left = new Node(1);
	//root->left->right->right = new Node(11);
	root->right->right = new Node(9);
	//root->right->right->left = new Node(4);

	// Function call
	cout << "Maximum element is " << findMax(root) << endl;

	return 0;
}

