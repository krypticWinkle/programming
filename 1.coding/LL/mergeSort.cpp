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

pair<List*, List*> input(int size)
{
    if(size == 0) return {nullptr, nullptr};
    int x; cin>>x;
    List *head = new List(x); 
    List *temp = head; List *tail = NULL;

    pair<List*, List*>p;

    for(int i=0; i<size-1; i++)
    {
        int val; cin>>val;
        List *Node = new List(val);
        temp->next = Node;
        temp = temp ->next;
    }
    p.first = head; p.second = temp;
    //tail = temp;
    return p;
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

List* merge(List* head1, List* head2)
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

List* divide(List *head, List *tail)
{
    if(head == tail)
    {
        List *node = new List(head->data);
        return node;
    }
    List *slow = head, *fast = head;
    while(fast != tail && fast->next != tail)
    {
        slow = slow ->next;
        fast = fast ->next->next;
    }
    List *lef_half = divide(head, slow);
    List *rig_half = divide(slow->next, tail);

    List *ans_head = merge(lef_half, rig_half);

    return ans_head;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int size;

    cin>>size; 
    pair<List*, List*> pi = input(size);

    //cout<<pi.first->data<<pi.second->data;

    List *ans_head = divide(pi.first, pi.second);

    print(ans_head);
    print(pi.first);
    return 0;
}

/*
ip:
6
10 2 19 22 3 7

op:
2 3 7 10 19 22 
10 2 19 22 3 7*/