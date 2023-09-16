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
        store.pop_back();
        top--;
        //cout<<x<<"\n";
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
void Stack::min()
{
    cout<<store[top]<<"\n";
}



int main()
{

    class Stack s1, min_stack;
    while(1)
    {
        string inp;
        cin>>inp;

        if(inp == "push")
        {
            int x;
            cin>>x;
            if((s1.size() != 0 && x <= min_stack.peek()) || s1.size()==0)
            {
                min_stack.push(x);
            }
            
            s1.push(x);
            
        }
        else if(inp == "pop")
        {
            if(s1.peek() == min_stack.peek())
            {
                min_stack.pop();
            }
            cout<<s1.pop()<<"\n";
        }
        else if (inp =="min")
        {
            min_stack.min();
        }
        else if(inp == "top")
        {
            cout<<s1.peek()<<"\n";
        }
        else if(inp == "size")
        {
            cout<<s1.size();
        }
        else
        {
            return 0;
        }
    }
    return 0;
}