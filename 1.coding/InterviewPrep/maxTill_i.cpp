#include<bits/stdc++.h>
using namespace std;

//Source: Apna College: 8.4
int* maximumTillI(int *a, int size)
{
    int* b = new int[size];
    b[0] = a[0];

    for(int i=1; i<size; i++)
    {
        if(b[i-1] < a[i])
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = b[i-1];
        }
    }

    // for(int i=0; i<size; i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    return b;
}

int main()
{
    int size; cin>>size;
    int a[size];
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    int *b = maximumTillI(a, size);
    for(int i=0; i<size; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}