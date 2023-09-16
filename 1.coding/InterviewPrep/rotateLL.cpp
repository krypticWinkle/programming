#include<bits/stdc++.h>
using namespace std;

class List
{
    public:
    int data; List *next;

    
    List(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// class Queue
// {
//     private:
//     int front, rear, curSize, size;
//     vector<List*>store;
//     public:
//     Queue(int size)
//     {
//         front = 0; rear = -1, curSize = 0;
//         this->size = size;
//     }
//     void add(List* x)
//     {
//         if(curSize < this->size)
//        {     
//             store.push_back(x);
//             curSize++;
//         }
//     }
//     List* remove()
//     {
//         if(curSize != 0)
//         {
//             curSize--;
//             List* x = store[0];
//             return x;
//         }
//         return NULL;
//     }
//     List* peek()
//     {
//         if(curSize != 0)
//         {
//             return store[0];
//         }
//         return NULL;
//     }
//     int sizee()
//     {
//         return store.size();
//     }
// };

List* input(int size)
{
    int hd; cin>>hd;
    List* head = new List(hd);
    List* temp = head;

    for(int i=1; i<size; i++)
    {
        int x; cin>>x;
        List* node = new List(x);
        temp->next = node;
        temp = temp->next;
    }
    return head;
}

void display(List* head)
{
    List* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int size, d; cin>>size>>d;
    List* head = input(size);
    List* temp = head; List* prev;
    
    


    for(int i=0; i<size-1; i++)
    {
        temp = temp->next;
    }
    temp->next = head;

    for(int i=0; i<d; i++)
    {
        prev = head;
        head = head->next;
    }
    prev->next = NULL;

    display(head);






    //Queue q1(size);

    // for(int i=d; i<size; i++)
    //     q1.add(temp);

    // temp = q1.peek();

    // for(int i=d; i<size; i++)
    // {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    // temp = head;

    // for(int i=0; i<d; i++)
    // {    
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }

        
    return 0;
}