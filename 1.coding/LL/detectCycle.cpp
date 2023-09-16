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

List* takeInput()
{
    int size; cin>>size;
    int hData; cin>>hData;

    List *head = new List(hData);
    List *temp = head;

    for(int i=1; i<size; i++)
    {
        int data; cin>>data;
        List *node = new List(data);
        temp->next = node;
        temp = node;
    }

    return head;
}

bool hasCycle(List *head)
{
    if(head == NULL || head->next == NULL)
        return false;
    List *slow = head;
    List *fast = head;

    while(fast->next!=NULL && fast->next->next!= NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
            return true;
    }

    return false;
}
/*NOTE: Your input is unable to make loops. So, just see the hasCycle 
function, which you submitted on leetcode*/

int main()
{
    List* head = takeInput();
    cout<<hasCycle(head);

    return 0;
}