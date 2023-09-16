#include<bits/stdc++.h>
using namespace std;

class Queue
{
    private:
    int front, rear, capacity, curr_size;
    vector<int>store, store2;

    public:
    Queue()
    {
        curr_size =  0;
        front = 0;
        rear = -1;
    }
    void add(int val)
    {
        rear++;
        store.push_back(val);
        curr_size++;
    }

    int remove()
    {
        if(curr_size != 0)
        {
            while(store.size() != 1)
            {
                int x = store[front];
                front++;
                curr_size--;
                store2.push_back(x);
            }
            int x = store[front];
            store.pop_back();
            front = 0;
            while(store2.size() != 0)
            {
                int x = store2[front];
                front++;
                curr_size--;
                store2.push_back(x);
            }
        }
        cout<<"Queue underflow\n";
        return -1;
    }

    int peek()
    {
        if(curr_size == 0)
        {
            cout<<"Queue underflow\n";
            return -1;
        }
        return store.back();
    }
    int size() 
    {
        return curr_size;
    }
};

int main()
{
    Queue q1();
    while(1)
    {
        string operation;
        cin>>operation;
        
        if(operation == "push")
        {
            int x;
            cin>>x;
            
        }
        
        else if(operation == "top")
        {
            // int k = q1.peek();
            // if(q1.size() != 0)
            // {
            //     cout<<k<<"\n";
            // }
        }
        else if(operation == "pop")
        {
            // if(q1.size() != 0)
            // {
            //     int k = q1.remove();
            //    cout<<k<<"\n";
            //}
            //else
            {
                //q1.remove();
            }
        }
        else if(operation == "size")
        {
            //cout<<q1.size()<<"\n";
        }
        else if(operation == "quit")
        {
            return 0;
        }
    }
    return 0;
}