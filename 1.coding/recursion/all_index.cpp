#include <iostream>
using namespace std;

//You are required to find the all indices at which x occurs in array a.
void allIndex(int arr[], int idx, int element, int size, int fsf)
{
    //fsf -> found so far (i.e. how many times)
    if(idx == size)
    {
        if(fsf==0)
        {
            cout<<"-1"<<"\n";
        }
        return;
    }
    if(element == arr[idx])
    {
        cout<<idx<<"\n";
        fsf++;
    }
    allIndex(arr, idx+1, element, size, fsf);
    
}

int main()
{
    int size, element;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cin >> element;
    allIndex(arr, 0, element, size, 0);
    
}