#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int size, top;
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
};

int Stack :: push(int x)
{
    if(top < Stack::size)
    {
        top++;
        *(store+top) = x;
        return top;
    }
    return -1;
}

int Stack :: pop()
{
    int x = -1;
    if(top > -1)
    {
        top--;
        return x;
    }
    return -1;
}

int Stack :: peek()
{
    return *(store + top);
}

bool Stack :: isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    return false;
}

int main ()
{
    int array_size; cin>>array_size;
    int array[array_size], temp = 1, ans[array_size] ={1};
    Stack s1(array_size), s2(array_size);

// See Sumeet Malik's approach in which he uses just 1 stack and in that he pushes the indices
//of the array and pops them if arr[i] > arr[s1.peek()]

    for(int i=0; i<array_size; i++)
    {
        cin>>array[i];
    }
    s1.push(array[0]);
    s2.push(1);
    ans[0] = 1;
    for(int i=1; i<array_size; i++)
    {
        temp=1;
        while(array[i] > s1.peek() && (s1.isEmpty() == false))
        {
            s1.pop();
            temp = temp + s2.peek();
            s2.pop();
        }

        s2.push(temp);
        s1.push(array[i]);
        ans[i] = s2.peek();
    }

    for(int i=0; i< array_size; i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}