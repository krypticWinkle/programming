#include<bits/stdc++.h>
using namespace std;

class Stack_i
{
    private:
    int top, size;
    int *store;

    public:
    Stack_i(int capacity)
    {
        top = -1;
        size = capacity;
        store = (int*)calloc(size, sizeof(int));
    }
    int push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

int Stack_i::push(int x)
{
    if(top < size)
    {
        top++;
        *(store + top) = x;
        return top;
    }
    return -1;
}

int Stack_i::pop()
{
    int x = -1;
    if(top > -1)
    {
        x = *(store + top);
        top--;
    }
    return x;
}

int Stack_i::peek()
{
    return *(store + top);
}

bool Stack_i::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}



class Stack_str
{
    private:
    int top, size;
    string *store;

    public:
    Stack_str(int capacity)
    {
        top = -1;
        size = capacity;
        store = (string*)calloc(size, sizeof(string));
    }
    int push(string x);
    string pop();
    string peek();
    bool isEmpty();
};

int Stack_str::push(string x)
{
    if(top < size)
    {
        top++;
        *(store + top) = x;
        return top;
    }
    return -1;
}

string Stack_str::pop()
{
    string x = "";
    if(top > -1)
    {
        x = *(store + top);
        top--;
    }
    return x;
}

string Stack_str::peek()
{
    return *(store + top);
}

bool Stack_str::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}

int value(int v1, int v2, char ch)
{
    if(ch == '+')
    {
        return v1 + v2;
    }
    else if(ch == '-')
    {
        return v1 - v2;
    }
    else if(ch == '*')
    {
        return v1 * v2;
    }
    return v1 / v2;
}

string infix_calc(string x1, string x2, char ch)
{
    string x = "(" + x1 + ch + x2 + ")";
    return x;
}

string prefix_calc(string x1, string x2, char ch)
{
    string x = ch + x1 + x2;
    return x;
}

int main()
{
    string post_exp, ch2 = "";
    cin>>post_exp;
    class Stack_i value_stack(post_exp.size());
    class Stack_str infix(post_exp.size()), pre(post_exp.size());

    for(int i=0; i<post_exp.size(); i++)
    {
        char ch = post_exp[i];
        if(ch  == '+' || ch  == '-' || ch  == '*' || ch  == '/')
        {
            int v2 = value_stack.pop();
            int v1 = value_stack.pop();

            value_stack.push(value(v1, v2, ch));

            string x2 = infix.pop() + "";
            string x1 = infix.pop() + "";
            infix.push(infix_calc(x1, x2, ch));

            x2 = pre.pop() + "";
            x1 = pre.pop() + "";
            pre.push(prefix_calc(x1, x2, ch));
        }
        else //when digit is encountered in the string
        {
            string x = ch + ch2;
            //cout<<x;
            value_stack.push(ch - '0');
            infix.push(x);
            pre.push(x);
        }
    }
    cout<<value_stack.peek()<<"\n"<<infix.peek()<<"\n"<<pre.peek()<<"\n";
    return 0;
}