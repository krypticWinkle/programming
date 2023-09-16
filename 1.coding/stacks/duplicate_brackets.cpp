#include<bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top, size;
    char* store;

public:
    Stack(int capacity)
    {
        top = -1;
        size = capacity;
        store = (char*)calloc(capacity, sizeof(char));
    }
    

    int push(char x);
    char pop();
};

int Stack::push(char x)
{
    if(top < Stack::size)
    {
        top++;
        *(store + top) = x;
    }
    else
    {
        return -1;
    }
    return top;
}

char Stack::pop()
{
    char x;
    if(top == -1)
    {
        return '1';
    }
    else
    {
        x = *(store + top);
        top--;
    }
    return x;
}


int main()
{
    string inp_str; char x='5', last_popped;
    getline(cin, inp_str);
    class Stack s(inp_str.size());
    
    for(int i=0; i<inp_str.size(); i++)
    {
        if(inp_str[i] != ')')
        {
            s.push(inp_str[i]);
        }
        else //when inp_str[i]=')'
        {
            while(x != '(' )//|| (x != last_popped))
            {
                if(x!='5')
                {
                    last_popped = x;
                }
                x = s.pop();//x is currently popped
                if(x == last_popped && i == inp_str.size()-1)
                {
                    cout<<"true";
                    return 0;
                }
            }
            last_popped = x;
            x ='5';
        }
    }
    cout<<"false";
    return 0;
}