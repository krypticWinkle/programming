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

int main()
{
    int window_size, arr_size;
    cin>>arr_size;
    int arr[arr_size], nge[arr_size];
    class Stack s1(arr_size);
    //Input arr
    for(int i=0; i<arr_size;i++)
    {
        cin>>arr[i];
    }
    cin>>window_size;
    //Making an arr for next greater index i.e. nge
    s1.push(arr_size-1);
    nge[arr_size-1] = arr_size;


//NOTE: The loop below isn't in O(n^2). Its O(n). Because pop will be operational sometimes.
//And total pop count will never exceed the count of total push
    for(int i=arr_size-2; i>=0; i--)
    {
        while(arr[i] >= arr[s1.peek()])
        {
            s1.pop();
            if(s1.isEmpty())
            {
                nge[i]=arr_size;
                s1.push(nge[i]);
                break;
            }
        }
        nge[i]=s1.peek();
        s1.push(i);
    }
    // for(int i=0; i<arr_size; i++)
    // {
    //     cout<<nge[i]<<" ";
    // }
    //cout<<"\n";
    //Now sliding windo algo

    int j=0;
    for(int i=0; i <= arr_size - window_size; i++)
    {
        if(j<i)
        {
            j = i;
        }
        while(nge[j] < i + window_size)
        {
            j = nge[j];
        }
        cout<<arr[j]<<" ";
    }
    return 0;
}

//4 17
//2 9 3 8 1 7 12 6 14 4 32 0 7 19 8 12 6
