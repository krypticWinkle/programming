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
    ios_base::sync_with_stdio(false);cin.tie(0);
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

        else if(str == "addFirst")
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
                Node ->next = head;
                head = Node;
            }
            size++;
        }

        else if( str == "addAt")
        {
            int pos, val; cin>>pos>>val;
            List* Node = new List(val);
            List *temp = head; size++;
            while(pos > 1 && temp != NULL)
            {
                temp = temp ->next;
                pos--;
            }
            if(pos == 0){Node ->next = head; head = Node;}
            else if(pos == 1){Node ->next = temp ->next; temp ->next = Node;}
            else if(pos > 1){cout<<"Invalid arguments\n"; continue;}
            if(Node ->next == NULL){tail = Node;}//when element is added at last
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
addFirst 10
getFirst
addAt 0 20
getFirst
getLast
display
size
addAt 2 40
getLast
addAt 1 50
addFirst 30
removeFirst
getFirst
removeFirst
removeFirst
addAt 2 60
display
size
removeFirst
removeFirst
getFirst
quit

op:
10
20
10
20 10 
2
40
20
10 40 60 
3
60
*/