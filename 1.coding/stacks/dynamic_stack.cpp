#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int topp, size;
    int* store;

    public:
    Stack(int capacity)
    {
        topp = -1;
        size = capacity;
        store = (int*)calloc(capacity, sizeof(int));
    }

    int push(int x);
    int pop();
    int peek();
    int sizes();
    void display();
};

int Stack::push(int x)
{
    if(topp < size-1)
    {
        topp++;
        *(store + topp) = x;
        return topp;
    }
    size = 2*size;
   int* store2 = (int*)calloc(size, sizeof(int));
   for(int i=topp; i>=0; i--)
   {
       *(store2 + i) = *(store + i);
   }
   store = store2;
    push(x);
    return topp;
}

int Stack::pop()
{
    int x = -1;
    if(topp > -1)
    {
        x = *(store + topp);
        topp--;
        cout<<x<<"\n";
        return x;
    }
    cout<<"Stack underflow\n";
    return x;
}

int Stack::peek()
{
    if(topp == -1)
    {
        cout<<"Stack underflow\n";
        return -1;
    }
    cout<<*(store + topp)<<"\n";
    return topp;
    
}

int Stack::sizes()
{
    cout<<topp+1<<"\n";
    return topp + 1;
}

void Stack::display()
{
    for(int i = topp; i>=0; i--)
    {
        cout<<*(store + i)<<" ";
    }
    cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    class Stack s1(n);
    while(1)
    {
        string inp;
        cin>>inp;

        if(inp == "push")
        {
            int x;
            cin>>x;
            s1.push(x);
        }
        else if(inp == "pop")
        {
            s1.pop();
        }
        else if (inp =="display")
        {
            s1.display();
        }
        else if(inp == "top")
        {
            s1.peek();
        }
        else if(inp == "size")
        {
            s1.sizes();
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
