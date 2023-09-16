#include<bits/stdc++.h>
using namespace std;

class Queue_class
{
    private:
    int front, rear, capacity, curr_size;
    vector<int>store;

    public:
    Queue_class()
    {
        //curr_size =  0;
        //capacity = x;
        front = 0;
        rear = -1;
    }
    void add(int val)
    {
        rear++;
        //rear = rear % capacity;
        store.push_back(val);
        curr_size++;
        return;
    }

    void remove()
    {
        if(curr_size != 0)
        {
            //int x = store[front];
            store.erase(store.begin());
            front++;
            //front = front % capacity;
            curr_size--;
            //return x;
        }
        //cout<<"Queue_class underflow\n";
        //return -1;
    }

    // int peek()
    // {
    //     if(curr_size == 0)
    //     {
    //         cout<<"Queue_class underflow\n";
    //         return -1;
    //     }
    //     return *(store + front);
    // }
    // int size() 
    // {
    //     return curr_size;
    // }

    void display()
    {
        if(store.size() != 0)
        {
            cout<<store[0]<<"\n";
        }
        //cout<<"\n";
    }
};

int main()
{
    int no_of_operations;
    cin>>no_of_operations;
    Queue_class q1;
    for(int i=0; i<no_of_operations; i++)
    {
        string operation;
        cin>>operation;
        
        if(operation == "1")
        {
            int x;
            cin>>x;
            q1.add(x);
        }
        else if(operation == "3")
        {
            q1.display();
        }
        // else if(operation == "peek")
        // {
        //     int k = q1.peek();
        //     if(q1.size() != 0)
        //     {
        //         cout<<k<<"\n";
        //     }
        // }
        else if(operation == "2")
        {
            // if(q1.size() != 0)
            // {
            //     int k = q1.remove();
            //     //cout<<k<<"\n";
            // }
            // else
            // {
                q1.remove();
            //}
        }
        // else if(operation == "size")
        // {
        //     cout<<q1.size()<<"\n";
        // }
        // else if(operation == "quit")
        // {
        //     return 0;
        // }
    }
    return 0;
}