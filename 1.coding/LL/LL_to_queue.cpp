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
        
        if(str == "add")
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

        else if(str == "remove")
        {
            if(head == NULL)
            {
                cout<<"Queue underflow\n";
            }
            else
            {
                cout<<head->data<<"\n";
                if(head == tail)//when there's only 1 element
                {
                    free(head); head = NULL;
                }
                else
                {
                    head = head ->next;
                }
                size--;
            }
        }

        else if(str == "peek")
        {
            if(size == 0)
            {
                cout<<"Queue underflow\n";
            }
            else{cout<<head->data<<"\n";}
        }

    }
    return 0;
}