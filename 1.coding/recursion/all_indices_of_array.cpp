#include<iostream>
using namespace std;

void getIndices(int *array, int start, int end, int element)
{
    if(array[start] == element)
    {
        cout<<start<<" ";
    }
    if(start >= end)
    {
        return;
    }
    getIndices(array, start+1, end, element);
}

int main()
{
    int size; cin>>size;
    int array[size];
    
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    int element; cin>>element;
    getIndices(array, 0, size, element);
    return 0;
}