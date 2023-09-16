#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    class Node* left;
    class Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(class Node* root)
{
    if(root==NULL)
    {
       return;
    }
    cout<<root ->data<<" ";
    preorder(root ->left);
    preorder(root ->right);
}

void postorder(class Node* root)
{
    if(root==NULL)
    {
       return;
    }
    postorder(root ->left);
    postorder(root ->right);
    cout<<root->data<<" ";
}

void inorder(class Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root ->left);
    cout<<root->data<<" ";
    inorder(root->right);

    return;
}

void print(class Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<":";
    cout<<root->left->data<<" "<<root->right->data<<"\n";
    print(root->left);
    print(root->right);
}
int main()
{
    class Node* root = new Node(1);
    root ->left = new Node(2);
    root ->right = new Node(3);
    root ->left->left = new Node(4);
    root ->left->right = new Node(5);
    root ->right->left = new Node(6);
    root ->right->right = new Node(7);

    // //preorder(root);
    inorder(root);
    // //postorder(root);
    // print(root);

    // int* a[9];
    // int ** same_as_a;

    // same_as_a = (int **) calloc(9, sizeof(int *));

    

    //int b = 100;

    //a[0] = &b;
    //*same_as_a = &b;

    //cout<< "1st element in the array a is " << a[0] << " and the data stored is " << *a[0]<< endl;

    //cout<< "1st element in the array same_as_a is " << *same_as_a << " and the data stored is " << **same_as_a << endl;
    // char s[]= "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0];

    // char b[] = "xyz";
    // char *c = &b[0];
    // //c++;
    // cout << c << endl;



    return 0;
}