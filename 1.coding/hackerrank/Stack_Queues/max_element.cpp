#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top=-1, size;
public:
    vector<int>data_store;
    Stack(/* args */)
    {

    }
    int push(int data);
    int pop();
    int max();
};

int Stack::push(int data)
{
    top++;
    data_store.push_back(data);
    return top;
}

int Stack::pop()
{
    if(top == -1)
    {
        return -1;
    }
    else
    {
        data_store.erase(data_store.begin() + top);
        top--;
        return top;
    }
}
int Stack::max()
{
    int maximum = data_store[0];
    for(int i=0; i<data_store.size();i++)
    {
        if(data_store[i] > maximum)
        {
            maximum = data_store[i];
        }
    }
    return maximum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tot_operations, operation, data;
    class Stack s, max_stack;
    cin>>tot_operations;
    for(int i=0;i<tot_operations;i++)
    {
        cin>>operation;
        if(operation == 1)
        {
            cin>>data;
            s.push(data);
        }
        else if(operation == 2)
        {
            s.pop();
        }
        else// if operation = 3 and printing the max element
        {
            cout<<s.max()<<"\n";
        }
    }
    return 0;
}
