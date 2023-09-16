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
            cout<<tail->data<<"\n";
        }
    }
    cout<<size<<"\n";
    if(head != NULL){cout<<tail->data<<"\n";}
    return 0;
}

/*ip:
addLast 10
addLast 20
addLast 30
addLast 40
addLast 50
quit
op:
10
20
30
40
50
5
50*/