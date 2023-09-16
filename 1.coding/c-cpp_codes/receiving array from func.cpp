#include<iostream>
using namespace std;

int* reversingArr(int* arr)
{
    for(int i=0; i<5/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }

    return arr;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    //We can keep the returned array in a new array but the original array too has changed
    int *revArr = reversingArr(arr);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}