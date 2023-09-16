#include<bits/stdc++.h>
using namespace std;


class Stack_opnd
{
    private:
    int top, size;
    string *store;

    public:
    Stack_opnd(int capacity)
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

int Stack_opnd::push(string x)
{
    if(top < size)
    {
        top++;
        *(store + top) = x;
        return top;
    }
    return -1;
}

string Stack_opnd::pop()
{
    string x;
    if(top >= -1)
    {
        x = *(store + top);
        top--;
        return x;
    }
    return x;
}

string Stack_opnd::peek()
{
    return *(store + top);
}

bool Stack_opnd::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}



class Stack_operator
{
    private:
    int top, size;
    char *store;

    public:
    Stack_operator(int capacity)
    {
        top = -1;
        size = capacity;
        store = (char*)calloc(size, sizeof(char));
    }

    int push(char x);
    char pop();
    char peek();
    bool isEmpty();
};

int Stack_operator::push(char x)
{
    if(top < size)
    {
        top++;
        *(store + top) = x;
        return top;
    }
    return -1;
}

char Stack_operator::pop()
{
    if(top >= -1)
    {
        int x = *(store + top);
        top--;
        return x;
    }
    return 1;
}

char Stack_operator::peek()
{
    return *(store + top);
}

bool Stack_operator::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}


int precedence(char x)
{
    if(x == '+' || x == '-')
    {
        return 1;
    }
    return 2;//when * or / is there. They have a higher priority

}

string pre_eval(string v1, string v2, char ch)
{
    string x = ch + v1 + v2;
    return x;
}

string post_eval(string v1, string v2, char ch)
{
    string x = v1 + v2 + ch;
    return x;
}


int main()
{
    string expression, ch2 = "";
    cin>>expression;
    class Stack_operator s1(expression.size());
    class Stack_opnd pre(expression.size()), post(expression.size());

    for(int i=0; i<expression.size(); i++)
    {
        char ch = expression[i];
        if(expression[i] == '(')
        {
            s1.push(ch);
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            while(s1.isEmpty() == false && s1.peek() != '(' && precedence(s1.peek()) >= precedence(ch))
            {
                string v2 = pre.pop();
                string v1 = pre.pop();
                pre.push(pre_eval(v1, v2, s1.peek()));

                v2 = post.pop();
                v1 = post.pop();
                post.push(post_eval(v1, v2, s1.peek()));

                s1.pop();
            }
            s1.push(ch);
        }
        else if(ch == ')')
        {
            while(s1.isEmpty() == false && s1.peek() != '(')
            {
                string v2 = pre.pop();
                string v1 = pre.pop();
                pre.push(pre_eval(v1, v2, s1.peek()));

                v2 = post.pop();
                v1 = post.pop();
                post.push(post_eval(v1, v2, s1.peek()));

                s1.pop();
            }
            s1.pop();
        }
        else if(ch != ' ')
        {
            string str = ch + ch2;
            pre.push(str);//cout<<pre.peek()<<" ";
            post.push(str);//cout<<post.peek()<<" ";
        }
    }
    while(s1.isEmpty() == false)
    {
        string v2 = pre.pop();
        string v1 = pre.pop();
        pre.push(pre_eval(v1, v2, s1.peek()));

        v2 = post.pop();
        v1 = post.pop();
        post.push(post_eval(v1, v2, s1.peek()));

        s1.pop();
    }

    cout<<post.peek()<<"\n"<<pre.peek()<<"\n";
    return 0;
}

