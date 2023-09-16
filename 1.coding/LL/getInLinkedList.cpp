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
            if(size == 0)
            {
                head = Node;
                tail = head;
                //flag = 0;
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

        else if(str == "getFirst")
        {
            if(head == NULL)
            {
                cout<<"List is empty\n";
            }
            else
            {
                cout<<head->data<<"\n";
            }
        }

        else if(str == "getLast")
        {
            if(tail == NULL)
            {
                cout<<"List is empty\n";
            }
            else
            {
                cout<<tail->data<<"\n";
            }
        }

        else if(str == "getAt")
        {
            int position; cin>>position;
            List *temp = head;
            while(position != 0 && temp!=NULL)
            {
                temp = temp->next;
                position--;
            }
            if(temp!=NULL){cout<<temp->data<<"\n";}
            else{cout<<"Invalid arguments\n";}
        }

    }
    return 0;
}

/*
ip:
addLast 20
removeFirst
addLast 50
getFirst
removeFirst
addLast 10
getFirst
getAt 1
getLast
removeFirst
removeFirst
removeFirst
getFirst
addLast 30
getAt 3
getLast
addLast 40
getFirst
quit

op:
50
10
Invalid arguments
10
List is empty
List is empty

List is empty
Invalid arguments
30
30
*/