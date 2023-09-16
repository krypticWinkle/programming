#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int top, size;
    int *store;

    public:
    Stack(int capacity)
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

int Stack::push(int x)
{
    if(top < Stack::size)
    {
        top++;
        *(store + top) = x;
    }
    return top;
}

int Stack::pop()
{
    int x=-1;
    if(top > -1)
    {
        top--;
        x = *(store + top);
    }
    return x;
}

bool Stack::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}

int Stack::peek()
{
    return *(store + top);
}

int main()
{
    int size_of_array;
    cin>>size_of_array;
    int array[size_of_array], ans[size_of_array] = {0};
    class Stack s1(size_of_array);

    for(int i=0; i<size_of_array; i++)
    {
        cin>>array[i];
    }
    s1.push(array[size_of_array-1]);
    ans[size_of_array-1] = -1;

//NOTE: The loop below isn't in O(n^2). Its O(n). Because pop will be operational sometimes.
//And total pop count will never exceed the count of total push
    for(int i=size_of_array-2; i>=0; i--)
    {
        while(s1.peek() <= array[i])
        {
            s1.pop();
            if(s1.isEmpty())
            {
                ans[i]=-1;
                s1.push(ans[i]);
                break;
            }
        }
        ans[i]=s1.peek();
        s1.push(array[i]);
    }

    for(int i=0; i<size_of_array; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}