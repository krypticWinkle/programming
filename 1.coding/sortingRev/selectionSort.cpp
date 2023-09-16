#include<bits/stdc++.h>
using namespace std;

void compare(int* arr, int size)
{
    int mini = arr[0], min_idx=0;
    for(int i=1; i<size; i++)
    {
        cout<<"Comparing "<<arr[i]<<" and "<<mini<<"\n";
        if(mini > arr[i])
        {
            mini = arr[i];
            min_idx = i;
        }
    }
    cout<<"Swapping "<<arr[0]<<" and "<<mini<<"\n";
    swap(arr[0], arr[min_idx]);
}


int main()
{
    int size; cin>>size;
    int *arr;
    arr = (int*)calloc(size, sizeof(int));
    for(int i=0; i<size; i++)
    {
        cin>>*(arr + i);
    }

    for(int i=0; i<size-1; i++)
    {
        compare(arr+i, size-i);
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}