#include<bits/stdc++.h>
using namespace std;
int maximum = 0;
int maxx = 0;
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

int maximum_gen_tree(Node* root)
{
    // if(root == NULL)
    // {
    //     return 0;
    // }
    if(root->data > maximum)
    {
        maximum = root->data;
    }
    for(int i=0; i<root->children.size(); i++)
    {
        maximum_gen_tree(root->children[i]);
    }
    return maximum;



//Another approach
    // for(int i=0; i<root->children.size(); i++)
    // {
    //     int max_child = maximum_gen_tree(root->children[i]);
    //     if(max_child > maximum)
    //     {
    //         maximum = max_child;
    //     }
    // }
    // if(root->data > maximum)
    // {
    //     maximum = root->data;
    // }
    // return maximum;

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
    cout<<maximum_gen_tree(root);
    return 0;
}