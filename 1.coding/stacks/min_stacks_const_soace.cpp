#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int top;
    vector<int>store;

    public:
    Stack()
    {
        top = -1;
    }

    void push(int x);
    int pop();
    int peek();
    int size();
    void min();
};

void Stack::push(int x)
{
    top++;
    store.push_back(x);
}

int Stack::pop()
{
    int x = -1;
    if(top > -1)
    {
        x = store[top];
        //cout<<x<<"\n";
        store.pop_back();
        top--;
        return x;
    }
    cout<<"Stack underflow\n";
    return x;
}

int Stack::peek()
{
    if(top == -1)
    {
        cout<<"Stack underflow\n";
        return -1;
    }
    //cout<<store[top]<<"\n";
    return store[top];
    
}

int Stack::size()
{
    //cout<<top+1<<"\n";
    return top + 1;
}

int main()
{

    class Stack s1; int min;
    while(1)
    {
        string inp;
        cin>>inp;

        if(inp == "push")
        {
            int x;
            cin>>x;
            if(s1.size() == 0)
            {
                min = x;
                s1.push(x);
            }
            else
            {
                if(x >= min)
                {
                    s1.push(x);
                }
                else
                {
                    s1.push(2*x - min);
                    min = x;
                }
            }
            
        }
        else if(inp == "pop")
        {
            if(s1.size() > 0 && s1.peek() > min)//check when equal
            {
                cout<<s1.pop()<<"\n";
            }
            else if(s1.size() == 0)
            {
               s1.pop();
            }
            else if(s1.size() > 0 && s1.peek() <= min)
            {
                cout<<min<<"\n";
                min = 2*min - s1.peek();
                s1.pop();
            }
        }
        else if (inp =="min")
        {
            
            cout<<min<<"\n";
        }
        else if(inp == "top")
        {
            if(s1.size() != 0)
            {
                if(s1.peek() >= min)
                {
                    cout<<s1.peek()<<"\n";
                }
                else
                {
                    cout<<min<<"\n";
                }
            }
        }
        else if(inp == "size")
        {
            cout<<s1.size()<<"\n";
        }
        else
        {
            return 0;
        }
    }
    return 0;
}