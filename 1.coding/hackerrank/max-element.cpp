#include <bits/stdc++.h>
using namespace std;
 
class SinglyLinkedListNode      //Linked list definition
{
    public:
        int data;
        SinglyLinkedListNode* next;
};

void push(int data)       //push into stack
{
    SinglyLinkedListNode* node;
    node = (SinglyLinkedListNode*)calloc(1, sizeof(SinglyLinkedListNode));
    node ->data = data;
    node ->next = top;
    // if(top != NULL)
    // {
    //     SinglyLinkedListNode* max;
    //     max = top;
    // }
    // else
    // {
    //     max = ;
    // }
    top = node;
    if(top ->next != NULL)
    {
        if(top ->data > (max_store.at(max_store.size()-1)))//may give seg fault on 1st time (verify)
        {
            max(top ->data);
        }
    }
    else
    {
        max(top ->data);
    }
}

void pop()
{
    if(top == NULL)
    {
        
    }
    else
    {
        SinglyLinkedListNode* temp;
        temp = top ->next;
        free(top);
        top = temp;
        free(temp);
    }
}
int max(int maximum)
{
        int x = maximum;
        max_store.push_back(x);
 }

int main()
{
    vector<int>max_store;
    SinglyLinkedListNode* top;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tot_operations, operation, data;
    cin>>tot_operations;
    for(int i=0;i<tot_operations;i++)
    {
        cin>>operation;
        if(operation == 1)
        {
            cin>>data;
            push(data);
        }
        else if(operation == 2)
        {
            pop();
        }
        else// if operation = 3 and printing the max element
        {
            cout<<max_store.size()-1<<"\n";
        }
    }
    return 0;
}
 