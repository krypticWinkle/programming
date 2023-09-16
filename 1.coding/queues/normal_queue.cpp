#include<bits/stdc++.h>
using namespace std;

class Queue
{
    private:
    int front, rear, capacity, curr_size;
    int *store;

    public:
    Queue(int x)
    {
        curr_size =  0;
        capacity = x;
        front = 0;
        rear = -1;
        store = (int*)calloc(capacity, sizeof(int));
    }
    void add(int val)
    {
        if(curr_size < capacity)
        {
            rear++;
            rear = rear % capacity;
            *(store + rear) = val;
            curr_size++;
            return;
        }
        cout<<"Queue overflow\n";
    }

    int remove()
    {
        if(curr_size != 0)
        {
            int x = *(store + front);
            front++;
            front = front % capacity;
            curr_size--;
            return x;
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
        return *(store + front);
    }
    int size() 
    {
        return curr_size;
    }

    void display()
    {
        for(int i=0; i< curr_size; i++)
        {
            int idx = (front + i) % capacity;
            cout<<*(store + idx)<<" ";
        }
        cout<<"\n";
    }
};

int main()
{
    int sizee;
    cin>>sizee;
    Queue q1(sizee);
    while(1)
    {
        string operation;
        cin>>operation;
        
        if(operation == "add")
        {
            int x;
            cin>>x;
            q1.add(x);
        }
        else if(operation == "display")
        {
            q1.display();
        }
        else if(operation == "peek")
        {
            int k = q1.peek();
            if(q1.size() != 0)
            {
                cout<<k<<"\n";
            }
        }
        else if(operation == "remove")
        {
            if(q1.size() != 0)
            {
                int k = q1.remove();
                cout<<k<<"\n";
            }
            else
            {
                q1.remove();
            }
        }
        else if(operation == "size")
        {
            cout<<q1.size()<<"\n";
        }
        else if(operation == "quit")
        {
            return 0;
        }
    }
    return 0;
}