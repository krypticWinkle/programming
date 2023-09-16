#include<bits/stdc++.h>
using namespace std;

struct List
{
    int data;
    struct List *next;
};

void printLinkedList( struct List *head)
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
    //declared a head node and allocated memory of 1 node to it
    struct List *head = (struct List *)calloc(1, sizeof(struct List));
    //temporary variable to iterate and populate the list
    struct List *tmp = head;

    int x; cin>>x;
    head->data = x;
    head ->next = NULL;

    while(1)
    {
        cin>>x;
        if(x == -1)
        {
            break;
        }
        struct List *node = (struct List *)calloc(1, sizeof(struct List));
        node->data = x;
        node->next = NULL;

        tmp->next = node;
        tmp = tmp->next;
    }

    printLinkedList(head);


    return 0;
}

/*

10 -> 20 -> 30 -> 40 -> 50 -> NULL

Q1: 5 -> 10 -> 20 -> 30 -> 40 -> 50 -> NULL (INSERT AT HEAD)

Q2: 10 -> 20 -> 30 -> 40 -> 50 -> 5 -> NULL (INSERT AT TAIL)

Q3: 10 -> 20 -> 5 -> 30 -> 40 -> 50 -> NULL (INSERT AT MID)

*/