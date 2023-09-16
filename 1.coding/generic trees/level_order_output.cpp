#include<bits/stdc++.h>
#include "treenode.h"
using namespace std;

class Queue
{
    private:
    int front = 0, rear = -1;

    public:
    vector<Treenode<int>*> store;
    Queue()
    {
        int x = 1;
    }
    void add(Treenode<int>* root)
    {
        rear++;
        store.push_back(root);
    }
    Treenode<int>* pop()
    {
        Treenode<int>* x = store[front];
        store.erase(store.begin());
        return x;
    }
    Treenode<int>* peek()
    {
        return store[front];
    }
    int size()
    {
        return store.size();
    }
    bool isEmpty()
    {
        if(store.size() == 0)
        {
            return true;
        }
        return false;
    }
};

Treenode<int>* takeInput()
{
    int rootData;
    //cout<<"Enter root\n";
    cin>>rootData;
    Treenode<int>* root = new Treenode<int>(rootData);
    Treenode<int>* temp = root;
    class Queue q1;
    q1.add(root);

    while(q1.isEmpty() == false)
    {
        root = q1.peek();
        int child_size;
        //cout<<"Enter the size of"<<root->data<<" ";
        cin>>child_size;
        for(int j=0; j<child_size; j++)
        {
            int child_data;
            cin>>child_data;
            Treenode<int>* child = new Treenode<int>(child_data);
            q1.add(child);
            root->children.push_back(child);
        }
        q1.pop();
    }
    return temp;
}

void printTre(Treenode <int>* root)
{
    class Queue q1;
    //cout<<root->data<<":";
    q1.add(root);
    while(q1.isEmpty() == false)
    {
        cout<<q1.peek()->data<<": ";
        for(int i=0; i<q1.peek()->children.size(); i++)
        {
            cout<<q1.peek()->children[i]->data<<" ";
            q1.add(q1.peek()->children[i]);
        }
        cout<<"\n";
        q1.pop();
    }
}

int main()
{
    Treenode<int>* root = takeInput();
    printTre(root);
    return 0;
}