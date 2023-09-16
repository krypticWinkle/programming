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
        
        if(str == "push")
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

        else if(str == "pop")
        {
            if(head == NULL)
            {
                cout<<"Stack underflow\n";
            }
            else
            {
                cout<<tail->data<<"\n";
                List *temp = head;
                if(temp == tail)//when there's only 1 element
                {
                    free(temp); temp = NULL;
                }
                else
                {
                    while(temp ->next != tail)
                    {
                        temp = temp->next;
                    }

                    free(temp->next);
                    temp->next = NULL;
                    tail = temp;
            }
                size--;
            }
        }

        else if(str == "top")
        {
            cout<<tail->data<<"\n";
        }

    }
    return 0;
}