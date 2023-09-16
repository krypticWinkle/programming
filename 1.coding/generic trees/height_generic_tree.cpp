#include<bits/stdc++.h>
using namespace std;
int height = 0;
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

    public:
    Stack(int x)
    {
        size = x;
    }
    void push(Node* root)
    {
        if(top < size-1)
        {
            st.push_back(root);
            top++;
        }
    }
    void pop()
    {
        if(top > -1)
        {
            top--;
            st.pop_back();
        }
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

int height_gen_tree(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int h = 0;

    for(int i=0; i<root->children.size(); i++)
    {
        int child_height = height_gen_tree(root->children[i]);
        if(child_height > h)
        {
            h = child_height;
        }
    }
    h = h + 1;

    return h;
}

int main()
{
    int sizee;
    cin>>sizee;
    int array[sizee];
    for(int i=0; i<sizee; i++)
    {
        cin>>array[i];
    }
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

                s1.peek()->children.push_back(child);
                s1.push(child);
            }
        }
    }
    cout<<height_gen_tree(root);
    return 0;
}