#include<bits/stdc++.h>
using namespace std;

class Queue
{
    private:
    int front, rear, curSize, size;
    int *store;

    public:
    Queue(int size)
    {
        front = 0; rear = -1, curSize = 0;
        this->size = size;
        store = (int*)calloc(size, sizeof(int));
    }
    void add(int x)
    {
        if(curSize < this->size)
       {     
            rear++;
            *(store + rear) = x;
            curSize++;
        }
    }
    int remove()
    {
        if(curSize != 0)
        {
            curSize--;
            return *(store + front++);
        }
        return -1;
    }
    int peek()
    {
        if(curSize != 0)
        {
            return *(store + front);
        }
        return -1;
    }
    int sizee()
    {
        return curSize;
    }
};

int main()
{
    int size, d; cin>>size>>d;
    int arr[size], ans[size];
    for(int i=0; i<size; i++)
        cin>>arr[i];

    Queue q1(size);

    for(int i=d; i<size; i++)
        q1.add(arr[i]);

    for(int i=0; i<size-d; i++)
        ans[i] = q1.remove();    

    for(int i=0; i<d; i++)
        ans[size-d+i] = arr[i];

    for(int i=0; i<size; i++)
        cout<<ans[i]<<" ";

        
    return 0;
}