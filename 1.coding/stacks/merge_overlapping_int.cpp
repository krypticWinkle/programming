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
    int num;
    cin>>num;
    int arr[num][2], ans[num][2];

    for(int i=0; i< num; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0; i< num; i++)
    {
        if(arr[i][0] < arr[i+1][0])
        {

        }
    }
    
    return 0;
}