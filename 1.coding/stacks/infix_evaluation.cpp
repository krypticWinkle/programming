#include<bits/stdc++.h>
using namespace std;

class Stack_i
{
    private:
    int size, top;
    int* store;

    public:
    Stack_i(int capacity)
    {
        top = -1;
        size = capacity;
        store = (int*)calloc(capacity, sizeof(int));
    }
    int push(int x);
    int pop();
    bool isEmpty();
    int peek();
};

int Stack_i::push(int x)
{
    if(top < Stack_i::size)
    {
        top++;
        *(store + top) = x;
        //cout<<x<<"is pushed\n";
        return top;
    }
    return -1;
}

int Stack_i::pop()
{
    if(top >= -1)
    {
        int x = *(store + top);
        top--;
        //cout<<*(store + top)<<"is popped\n";
        return x;
    }
    return 1;
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




class Stack
{
    private:
    int size, top;
    char* store;

    public:
    Stack(int capacity)
    {
        top = -1;
        size = capacity;
        store = (char*)calloc(capacity, sizeof(char));
    }
    char push(char x);
    char pop();
    bool isEmpty();
    char peek();
};

char Stack::push(char x)
{
    if(top < Stack::size)
    {
        top++;
        *(store + top) = x;
        return top;
    }
    return -1;
}


char Stack::pop()
{
    if(top >= -1)
    {
        char x = *(store + top);
        top--;
        return x;
    }
    return '1';
}

char Stack::peek()
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

int precedence(char optor)
{
    if(optor == '+')
    {
        return 1;
    }
    else if(optor == '-')
    {
        return 1;
    }
    else if(optor == '*')
    {
        return 2;
    }
    else if(optor == '/')
    {
        //return 2;
    }
    return 2;
}

int operation(int v1, int v2, char optor)
{
    if(optor == '+')
    {
        return v1+v2;
    }
    else if(optor == '-')
    {
        return v1-v2;
    }
    else if(optor == '*')
    {
        return v1*v2;
    }
    else if(optor == '/')
    {
        //return v1/v2;
    }
    return v1/v2;
}

int main()
{
    string expression;
    getline(cin, expression);
    class Stack s1(expression.size());
    class Stack_i s2(expression.size());
    for(int i=0; i<expression.size(); i++)
    {
        char ch = expression[i];

        if(ch == '(')
        {
            s1.push(ch);
        }
        else if(ch == ')')
        {
            while(s1.peek() != '(')
            {
                char optor = s1.pop();
                int v2 = s2.pop();
                int v1 = s2.pop();

                int opv = operation(v1, v2, optor);
                s2.push(opv);
            }
            s1.pop();
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            //ch is wanting higher priority operators to solve first
            while(s1.isEmpty() == false && s1.peek() != '(' && precedence(ch) <= precedence(s1.peek()))
            {
                char optor = s1.pop();
                int v2 = s2.pop();
                int v1 = s2.pop();

                int opv = operation(v1, v2, optor);
                s2.push(opv);
            }
            //ch is pushing itself now
            s1.push(ch);
        }
        else if(ch != ' ')//when the string is a digit
        {
            s2.push(ch - '0');
        }
    }

    while(s1.isEmpty() == false)
    {
        char optor = s1.pop();
        int v2 = s2.pop();
        int v1 = s2.pop();

        int opv = operation(v1, v2, optor);
        s2.push(opv);
    }

    cout<<s2.peek()<<"\n";
    return 0;
}

/*
/*
ip: 2 + 6 * 4 / 8 - 3
op: 2*/
// while(expression[i] != ')' && expression[i] != '*' && expression[i] != '/')