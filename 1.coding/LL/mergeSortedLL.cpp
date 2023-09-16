#include<bits/stdc++.h>
using namespace std;

class List
{
    public:
    int data;
    List* next;

    List(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

List* input(int size)
{
    if(size == 0) return nullptr;
    int x; cin>>x;
    List *head = new List(x); 
    List *temp = head;
    for(int i=0; i<size-1; i++)
    {
        int val; cin>>val;
        List *Node = new List(val);
        temp->next = Node;
        temp = temp ->next;
    }
    return head;
}

List* mergeSortedLists(List* head1, List* head2)
{
    List *ans_head = NULL, *ans_temp = NULL;
    List *temp1 = head1, *temp2 = head2;

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1 ->data < temp2->data)
        {
            List *Node = new List(temp1->data);
            if(ans_head == NULL)
            {
                ans_head = Node;
                ans_temp = ans_head;
            }
            else
            {
                ans_temp ->next = Node;
                ans_temp = ans_temp ->next;
            }
            temp1 = temp1->next;

        }
        else //(temp1 ->data >= temp2->data)
        {
            List *Node = new List(temp2->data);
            if(ans_head == NULL)
            {
                ans_head = Node;
                ans_temp = ans_head;
            }
            else
            {
                ans_temp ->next = Node;
                ans_temp = ans_temp ->next;
            }
            temp2 = temp2->next;

        }
    }
    while(temp1 != NULL)
    {
        List *Node = new List(temp1->data);
        if(ans_head == NULL)
        {
            ans_head = Node;
            ans_temp = ans_head;
        }
        else
        {
            ans_temp ->next = Node;
            ans_temp = ans_temp ->next;
        }
        temp1 = temp1 ->next;
    }
    while(temp2 != NULL)
    {
        List *Node = new List(temp2->data);
        if(ans_head == NULL)
        {
            ans_head = Node;
            ans_temp = ans_head;
        }
        else
        {
            ans_temp ->next = Node;
            ans_temp = ans_temp ->next;
        }
        temp2 = temp2 ->next;
    }
    return ans_head;
}

void print(List* head)
{
    List* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int size1, size2;

    cin>>size1; List* head1 = input(size1); 
    cin>>size2; List* head2 = input(size2);

    List* head = mergeSortedLists(head1, head2);

    print(head); 
    print(head1); 
    print(head2);

    return 0;
}