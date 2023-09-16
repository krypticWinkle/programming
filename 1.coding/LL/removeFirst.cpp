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

int main()
{
    string str = ""; bool flag = 1; int size=0;
    List* head = NULL; List* tail = NULL;
    while(str != "quit")
    {
        cin>>str;
        if(str == "addLast")
        {
            int val; cin>>val;
            List* Node = new List(val);
            if(flag == 1)
            {
                head = Node;
                tail = head;
                flag = 0;
            }
            else
            {
                tail ->next = Node;
                tail = tail ->next;
            }
            size++;
        }
        else if(str == "size")
        {
            cout<<size<<"\n";
        }
        else if(str == "display")
        {
            List *temp = head;
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<"\n";
        }
        else if(str == "removeFirst")
        {
            if(head == NULL)
            {
                cout<<"List is empty\n";
            }
            else
            {
                List *temp = head;
                head = head->next;
                delete(temp);
                temp = NULL;
                size--;
            }
        }
    }
    return 0;
}

/*
ip:
addLast 10
addLast 20
addLast 30
display
removeFirst
size
addLast 40
addLast 50
removeFirst
display
size
removeFirst
removeFirst
removeFirst
removeFirst
quit

op:
10 20 30 
2
30 40 50 
3
List is empty*/