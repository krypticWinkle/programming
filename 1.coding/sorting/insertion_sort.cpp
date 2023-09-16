#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin>>n;
    int *array;// int size [5] = {25, 17, 31, 13, 2};
    array = (int*)calloc(n, sizeof(int));
    for(int i=0;i<n; i++)
    {
        cin>>*(array + i);
    }
    for(int i = 1; i < n; i++)
    {
        if(array[i] < array[i-1])
        {
            swap(array[i], array[i-1]);
            if(i!=1){i-=2;}
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}