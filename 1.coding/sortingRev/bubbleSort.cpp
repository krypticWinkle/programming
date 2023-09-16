#include<iostream>
using namespace std;

void compare(int* arr, int size)
{
    for(int i=1; i<size; i++)
    {
        cout<<"Comparing "<<arr[i]<<" and "<<arr[i-1]<<"\n";
        if(arr[i] < arr[i-1])
        {
            cout<<"Swapping "<<arr[i]<<" and "<<arr[i-1]<<"\n";
            swap(arr[i], arr[i-1]);
        }
    }
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

    for(int i=size; i>0; i--)
    {
        compare(arr, i);
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}