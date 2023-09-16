//TOKOPEDIA


// //INSERT A NODE IN BST

// void insertNodeBST(Node* newNode, Node *root)
// {
//     if(root->right == NULL && newNode->data > root->data)
//     {
//         root->right = newNode;
//         return;
//     }
//     else if(root->left == NULL && newNode->data < root->data)
//     {
//         root->left = newNode;
//         return;
//     }

//     if(newNode->data > root->data)
//     {
//         insertNodeBST(newNode, root->right);
//     }
//     else
//     {
//         insertNodeBST(newNode, root->left);
//     }
// }


#include<bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    int arr[(2*n) -1][(2*n) -1];
    for(int i=n; i>=0; i--)
    {
        for(int j=0; j<(2*n) -1; j++)
        {
            if(j==0 || j ==(2*n)-2 || i==0 || i == (2*n) -2)
            {
                arr[i][j] = n;
            }
            else
            {
                arr[i][j] = i;
            }
        }
    }

    for(int i=0; i<(2*n )-1; i++)
    {
        for(int j=0; j<(2*n)-1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n; cin>>n;
    printPattern(n);
    return 0;
}



// for(int i=n; i>=0; i++)
// {
//     for(int j=0; j<n; j++)
//     {
//         if((i==0 && j==0) || i==0)
//         {
//             a[i][j] = n;
//         }

//     }
// }

// 3 3 3         3 3
// 3 2 2         2 3
// 3 2 1




//                 2 3
// 3 2 2           2 3
// 3 3 3           3 3
