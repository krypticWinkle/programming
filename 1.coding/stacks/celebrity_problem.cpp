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
        store = (int*)calloc(size, sizeof(int));
    }

    int push(int x);
    int pop();
    int peek();
    bool isEmpty();
    int length();
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

int Stack::length()
{
    return top+1;
}

int main ()
{
    int sizee;
    cin>>sizee;
    class Stack s1(sizee);
    int array[sizee][sizee];

    for(int i=0; i< sizee; i++)
    {
        for(int j=0; j<sizee; j++)
        {
            cin>>array[i][j];
        }
        s1.push(i);
    }

    while(s1.length() > 1)//s1.isEmpty() == false || 
    {
        int x = s1.pop();
        int y = s1.pop();

        if(array[x][y] == 1)//x is not celebrity
        {
            if(array[y][x] == 0)
            {
                s1.push(y);
            }
        }
        else
        {
            if(array[y][x] == 1)
            {
                s1.push(x);
            }
        }
    }

    if(s1.length() == 0)
    {
        cout<<"none\n";
        return 0;
    }
    else
    {
        for(int i=0; i<sizee; i++)
        {
            if(array[s1.peek()][i] != 0)
            {
                cout<<"none\n";
                return 0;
            }
            if(array[i][s1.peek()] != 1 && s1.peek() != i)
            {
                cout<<"none\n";
                return 0;
            }
        }
    }
    cout<<s1.peek()<<"\n";
    return 0;
}





// for (int j = 0; j < n; j++) 
// {
//     String line = br.readLine();
//     for (int k = 0; k < n; k++) 
//     {
//         arr[j][k] = line.charAt(k) - '0';
//     }
//      s1.push(j);
// }