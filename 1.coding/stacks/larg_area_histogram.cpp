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
        top=-1;
        size = capacity;
        store = (int*)calloc(size, sizeof(int));
    }

    int push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

int Stack::push(int x)
{
    if(top < Stack::size)
    {
        top++;
        *(store + top) = x;
        return top;
    }
    return -1;
}

int Stack::pop()
{
    if(top > -1)
    {
        top--;
        return *(store + top);
    }
    return -1;
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

int main ()
{
    int arr_size; 
    cin>>arr_size;
    int arr[arr_size];
    int rbi[arr_size], lbi[arr_size];// right and left boundary index of immediate smaller element
    class Stack s1(arr_size), s2(arr_size);

    for(int i=0; i<arr_size; i++)
    {
        cin>>arr[i];
    }
    s1.push(arr_size - 1);
    rbi[arr_size-1] = arr_size;

    for(int i=arr_size-2; i>=0; i--)//for rbi
    {
        while((s1.isEmpty() == false) && (arr[i] <= arr[s1.peek()]))
        {
            s1.pop();
        }
        if(s1.isEmpty())
        {
            rbi[i] = arr_size;
        }
        else
        {
            rbi[i] = s1.peek();
        }
        s1.push(i);
    }

    s2.push(0);
    lbi[0] = -1;
    for(int i=1; i<arr_size; i++)//for lbi
    {
        while((s2.isEmpty() == false) && arr[i] <= arr[s2.peek()])
        {
            s2.pop();
        }
        if(s2.isEmpty() == true)
        {
            lbi[i] = -1;
        }
        else
        {
            lbi[i] = s2.peek();
        }
        s2.push(i);
    }

    int maxArea = 0;

    for(int i=0; i<arr_size; i++)
    {
        int area = (rbi[i] - lbi[i] - 1) * arr[i];
        if(maxArea < area)
        {
            maxArea = area;
        }
    }
    cout<<maxArea<<"\n";
    return 0;
    
}