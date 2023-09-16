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

    Stack s(size1);

    for(int i=size1-1; i>=0; i--)
    {
        if(s.isEmpty() == true || s.peek() != list1[i])
        {
            s.push(list1[i]);
        }
    }

    // while(s.isEmpty() == false)
    // {
    //     cout<<s.peek()<<" \n"; s.pop();
    // }

    int poppedElement = -1;
    for(int i=0; i<size2; i++)
    {
        if((s.isEmpty() == false) && list2[i] == s.peek())
        {
            poppedElement = s.pop();
        }
        else if(s.isEmpty() == true && list2[i] != poppedElement)
        {
            cout<<list2[i]<<"\n";
            return 0;
        }
        else if(s.isEmpty() == true)
        {
            cout<<s.peek()<<"\n";
            return 0;
        }
        else if(list2[i] == poppedElement)
        {
            //do nothing
        }
        else if(s.isEmpty() == false)
        {
            cout<<s.peek()<<"\n";
            return 0;
        }
    }
    cout<<"All the elements are common\n";

    return 0;
}