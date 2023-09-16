#include<bits/stdc++.h>
using namespace std;

struct List
{
    int data;
    struct List *next;
};


void printLinkedList(struct List *head)
{
    struct List *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<"\n";
}

int main()
{
    struct List *head;
    struct List *tmp;
    int input;
    
    head = (struct List *)calloc(1, sizeof(struct List));
    cin>>head->data;
    head->next = NULL;
    tmp = head;
    while(1)
    {
        struct List *node;
        node = (struct List *)calloc(1, sizeof(struct List));

        cin>>input;
        if(input == -1)
        {
            break;
        }
        node->data = input;
        node->next = NULL;

        tmp ->next = node;
        tmp = tmp ->next;
    }
    printLinkedList(head);
    return 0;
}