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

List* absSort(List* head)
{
    List* frnt, *back, *temp = head->next;
    List *hd2 = new List(head->data);
    frnt = hd2, back = hd2;
    while (temp != NULL)
    {
        List *node = new List(temp->data);
        if(node->data < frnt->data)
        {
            node->next = back;
            back = node;
        }
        else
        {
            frnt->next = node;
            frnt = node;
        }
        temp=temp->next;
    }
    return back;
    
}

int main()
{
    int size; cin>>size;
    List *prev = NULL;
    int h_data; cin>>h_data;
    List *head = new List(h_data);
    List *temp = head;
    for(int i=1; i<size; i++)
    {
        int data; cin>>data;
        List *node = new List(data);
        temp ->next = node;
        temp = node;
    }
    head = absSort(head);
    temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0;
}















































struct Node
{
	Node* next;
	int data;
};

void push(Node** head, int data)
{
	Node* newNode = new Node;
	newNode->next = (*head);
	newNode->data = data;
	(*head) = newNode;
}


void printList(Node* head)
{
	if (head->next != NULL)
	while (head != NULL)
	{
		cout << head->data;
			cout << " ";
		head = head->next;
	}
	cout << endl;
}



class Solution
{
public:
    void sortList(Node** head)
    {
        Node *prev = NULL, *curr = *head;
        while(curr != NULL)
        {
            if((curr->next != NULL) && (curr->data > curr->next->data))
            {
                prev = curr->next;
                curr->next = prev->next;
                prev->next = *head;
                *head = prev;
            }
            else
            {
                curr=curr->next;
            }
        }

    }
};

int main()
{
	int t = 0;
	int n = 0;
	cin >> t;
	while (t--)
	{
		Node* head = NULL;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = n - 1; i >= 0; i--)
		{
			push(&head, arr[i]);
		}
		Solution ob;
		ob.sortList(&head);


		printList(head);
	}
	return 0;
}