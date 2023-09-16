#include<bits/stdc++.h>
using namespace std;
//wiggleSort 1:
void wiggle(int *a, int size)
{
    for(int i=0; i<size; i++)
    {
        if(i%2 == 0 && i+1 < size)
        {
            if(a[i] > a[i+1])
            {
                swap(a[i], a[i+1]);
            }
        }
        else
        {
            if(a[i]< a[i+1] && i+1 < size)
            {
                swap(a[i], a[i+1]);
            }
        }
    }
}

int main()
{
    int size; cin>>size;
    int a[size];
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    wiggle(a, size);
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}