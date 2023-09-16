#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int top, size;
    int* store;

    public:
    Stack(int capacity)
    {
        top = -1;
        size = capacity;
        store = (int*)calloc(capacity, sizeof(int));
    }

    int push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

int Stack::push(int x)
{
    if(top < size)
    {
        top++;
        *(store + top) = x;
        return top;
    }
    return -1;
}

int Stack::pop()
{
    int x = -1;
    if(top > -1)
    {
        x = *(store + top);
        top--;
    }
    return x;
}

int Stack::peek()
{
    return *(store + top);
}

bool Stack::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}

int main()
{
    string inp_str;
    cin>>inp_str;
    int ans[inp_str.size() + 1] = {0};
    class Stack s1(inp_str.size());
    s1.push(inp_str.size());

    for(int i=inp_str.size()-1; i>=0; i--)
    {
        if(inp_str[i] == 'i')
        {
            s1.push(i);
        }
    }
    int j=1;
    while(s1.isEmpty() == false)
    {
        for(int i=s1.peek(); i>=0 && ans[i] == 0; i--)
        {
            ans[i] = j;
            j++;
        }
        s1.pop();
    }
    for(int i=0; i<inp_str.size()+1; i++)
    {
        cout<<ans[i];
    }
    return 0;
}