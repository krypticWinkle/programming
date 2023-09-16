#include<bits/stdc++.h>
//#include "treenode.h"
using namespace std;

class Node
{
    public:
    int data;
    vector<Node*>children;

    Node(int val)
    {
        data = val;
    }
};

class Stack
{
    private:
    int size, top = -1;
    vector<Node*>st;
    //Node * store;
    //int *st;

    //declare array of node pointer

    //(Node*) myarray[9];

    //Node ** myarray;


    /*
    // to declare array of int
    int a[9] // for fix size
    int *a //dynamic size
    */


    public:
    Stack(int x)
    {
        size = x;
        //store = (Node*)calloc(size, sizeof(Node));
    }
    void push(Node* root)
    {
        if(top < size-1)
        {
            st.push_back(root);
            top++;
            //*(store + (++top)) = root;
        }
    }
    void pop()
    {
        if(top > -1)
        {
            top--;
            st.pop_back();
            //return x;
        }
        //return nullptr;
    }
    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        return false;
    }
    Node* peek()
    {
        if(top != -1)
        {
            Node* x = st[top];
            return x;
        }
        return nullptr;
    }
};

void print(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    for(int i=0; i<root->children.size(); i++)
    {
        if(i==root->children.size()-1)
        {
            cout<<root->children[i]->data;
        }
        else
        {
            cout<<root->children[i]->data<<", ";
        }
    }
    cout<<"\n";
    for(int i=0; i<root->children.size(); i++)
    {
        print(root->children[i]);
    }

}
int main()
{
    int array[] = {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 100, -1, -1, -1};
    int sizee = sizeof(array)/sizeof(array[0]);
    class Stack s1(sizee);

    class Node* root = new Node(array[0]);
    s1.push(root);
    for(int i=1; i< sizee; i++)
    {
        if(array[i] == -1)
        {
            s1.pop();
        }
        else
        {
            if(s1.isEmpty() == false)//when stack is not empty
            {
                class Node* child = new Node(array[i]);

                //class Node* temp = s1.peek();
                s1.peek()->children.push_back(child);
                //root = child;
                s1.push(child);
            }
            //s1.push(child);
        }
    }

    print(root);
    return 0;
}