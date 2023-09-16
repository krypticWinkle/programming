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
            List *temp = head;
            while(pos > 1 && temp != NULL)
            {
                temp = temp ->next;
                pos--;
            }
            if(pos == 0){Node ->next = head; head = Node;}
            else if(pos == 1 && temp != NULL){Node ->next = temp ->next; temp ->next = Node;}
            else if(pos > 1 || temp == NULL){cout<<"Invalid arguments\n"; continue;}
            if(Node ->next == NULL){tail = Node;}//when element is added at last
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

        else if(str == "removeAt")
        {
            int pos; cin>>pos;
            if(head == NULL)
            {
                cout<<"List is empty\n";continue;
            }            
            List *temp = head;
            while(pos > 1 && temp->next!=NULL)
            {
                temp = temp->next;pos--;
            }
            if(pos == 0)
            {
                if(temp->next == NULL){free(temp); temp = NULL;}//1 node only. delete it
                else{head = temp->next;free(temp); temp = NULL;}// size > 1 and delete head
                size--;
            }
            else if(pos == 1)
            {
                if(temp ->next != NULL)
                {
                    temp ->next = temp->next->next;//removing the node at "pos"
                    if(temp ->next == NULL){tail = temp;}//if the node removed was last node
                }
                else if(temp ->next == NULL){cout<<"Invalid arguments\n"; size++;}
                size--;
            }
            else if(pos > 1){cout<<"Invalid arguments\n";}
            
        }

        else if(str == "removeLast")
        {
            //free(tail);
            if(head == NULL){cout<<"Invalid arguments\n";continue;}
            else if(head->next == NULL){free(head); head = NULL; size--; continue;}
            List *temp = head;
            while(temp->next != tail)
            {
                temp = temp ->next;
            }
            tail = temp; tail ->next = NULL;
            size--;
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

        else if(str == "reverseDI")
        {
            List *marker = tail; int dup_tail_data = tail->data;    // 60 20 30 40(m)
            while(head->data != dup_tail_data)
            {
                List *it = head;    //20 30 40(m) 60
                while(it->next != marker)
                {
                    swap(it->data, it->next->data);
                    it = it->next;
                }
                swap(it->data, it->next->data);
                marker = it;
            }
        }

    }
    return 0;
}


/*
addFirst 10
addFirst 20
addLast 30
addLast 40
addLast 50
addFirst 60
removeAt 2
display
reverseDI
display
quit

60 20 30 40 50 
50 40 30 20 60  */