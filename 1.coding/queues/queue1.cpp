#include<bits/stdc++.h>
using namespace std;
//#define n 5

class Queue
{
    private:
    int front, rear, size;
    int* store;

    public:
    Queue(int capacity)
    {
        size = capacity;
        front = rear = -1;
        store = (int*)calloc(capacity, sizeof(int));
    }

    void add(int x);
    int remove();
    int peek();
    int length();
}; 

void Queue::add(int x)
{
    if(rear == size-1)
    {
        cout<<"Overflow\n";
        return;
    }
    rear++;
    *(store + rear) = x;
    if(front == -1)
    {
        front++;
    }
}
int Queue::remove()
{
    if(front == -1 || front > rear)
    {
        cout<<"Underflow\n";
        return -1;
    }
    return *(store + (front++));
}

int Queue::peek()
{
    if(front == -1 || front > rear)
    {
        cout<<"No elements\n";
        return -1;
    }
    //cout<<*(store + front);
    return *(store + front);
}

int Queue::length()
{
    return front+1;
}


int main()
{
    class Queue q(5);
    q.add(10);
    q.add(20);
    q.add(30);
    q.add(40);
    q.add(50);
    q.add(60);

    cout<<q.peek()<<"\n";
    //q.remove();
    if(q.length() != true)
    {
        cout<<q.remove()<<"\n";
    }
    q.peek();
    //cout<<q.remove()<<"\n";
    if(q.length() != true)
    {
        cout<<q.remove()<<"\n";
    }
    cout<<q.peek();

    return 0;
}