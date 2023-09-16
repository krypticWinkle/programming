#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int top, size;
    int *store;

    public:
    Stack(int &size)
    {
        top = -1;
        store = (int*)calloc(size, sizeof(int));
        this->size = size;
    }

    void push(int x)
    {
        if(top < size)
        {
            top++;
            *(store + top) = x;
        }
    }

    int pop()
    {
        if(top > -1)
        {
            int x = store[top];
            top--;
            return x;
        }
    }

    int peek()
    {
        if(top != -1)
        {
            return store[top];
        }
    }
    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        return false;
    }
    
};

int main()
{
    int size1, size2;
    cin>>size1>>size2;
    int list1[size1], list2[size2];
    
    for(int i=0; i<size1; i++)
    {
        cin>>list1[i];
    }

    for(int i=0; i<size2; i++)
    {
        cin>>list2[i];
    }
    
    sort(list1, list1 + size1);
    sort(list2, list2 + size2);

    Stack s(size1), s2(size2);

    s.push(list1[size1-1]);
    for(int i=size1-2; i>=0; i--)
    {
        if(s.peek() != list1[i])
        {
            s.push(list1[i]);
        }
    }

    s2.push(list2[size2-1]);
    for(int i=size2-2; i>=0; i--)
    {
        if(s2.peek() != list2[i])
        {
            s2.push(list2[i]);
        }
    }

    while(s.isEmpty() == false || s2.isEmpty() == false)
    {
        if(s.isEmpty() == true)
        {
            cout<<s2.peek()<<"\n";
            break;
        }
        else if(s2.isEmpty() == true)
        {
            cout<<s.peek()<<"\n";
            break;
        }
        
        if(s.peek() == s2.peek())
        {
            s.pop();
            s2.pop();
        }
        else
        {
            cout<<min(s.peek(), s2.peek());
            break;
        }
    }

    return 0;
}

// remove duplicates from an array 
// o(n) ?