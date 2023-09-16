#include<bits/stdc++.h>
#include "treenode.h"
using namespace std;
int height_reached = -1;

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

//better ninja approach
void print_k_level_data(Treenode<int>* root, int k)
{
    if(k==0)
    {
        cout<<root->data<<" ";
        return;
    }

    for(int i=0; i<root->children.size(); i++)
    {
        print_k_level_data(root->children[i], k-1);
    }
}


//THIS IS WRONG BECAUSE GLOBAL VARIABLE DOESN'T GET RESET IN RECURSIVE CALLS!

// void print_k_level_data(Treenode<int>* root, int k)
// {
//     height_reached++;

//     //height_reached++;
//     if(height_reached == k)
//     {
//         cout<<root->data<<" ";
//         return;
//     }
//     for(int i=0; i<root->children.size(); i++)
//     {
//         print_k_level_data(root->children[i], k);
//     }
//         //else{return; }
// }


int main()
{
    Treenode<int>* root = takeInput();
    int level_to_print;
    cin>>level_to_print;
    print_k_level_data(root, level_to_print);
    return 0;
}
