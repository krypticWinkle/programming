#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int size, top;
    char *store;

    public:
    Stack (int capacity)
    {
        top = -1;
        size = capacity;
        store = (char*)calloc(capacity, sizeof(char));
    }
    int push(char x);
    char pop();
    bool isEmpty();
};

int Stack :: push(char x)
{
    if(top < Stack::size)
    {
        top++;
        *(store + top) = x;
        return top;
    }
    return -1;
}

char Stack :: pop()
{
    if(top > -1)
    {
        char x = *(store + top);
        top--;
        return x;
    }
    return '1';
}

bool Stack:: isEmpty()
{
    if(Stack::top == -1)
    {
        return true;
    }
    return false;
}

int main ()
{
    string inp_str; char popped_br;
    getline(cin, inp_str);
    class Stack s1(inp_str.size());

    for(int i=0; i<inp_str.size(); i++)
    {
        if((inp_str[i] == '(') || (inp_str[i] == '{') || (inp_str[i] == '['))
        {
            s1.push(inp_str[i]);
        }
        else if((inp_str[i] == ')') || (inp_str[i] == '}') || (inp_str[i] == ']'))
        {
            popped_br = s1.pop();
            if(popped_br == '(' && inp_str[i] == ')')
            {
                continue;
            }
            else if(popped_br == '{' && inp_str[i] == '}')
            {
                continue;
            }
            else if(popped_br == '[' && inp_str[i] == ']')
            {
                continue;
            }
            else
            {
                cout<<"false";
                return 0;
            }
        }
    }
    if(s1.isEmpty())
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}