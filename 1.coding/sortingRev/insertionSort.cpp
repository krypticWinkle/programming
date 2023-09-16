#include<bits/stdc++.h>
using namespace std;




int main()
{
    int size; cin>>size;
    int *arr;
    arr = (int*)calloc(size, sizeof(int));
    for(int i=0; i<size; i++)
    {
        cin>>*(arr + i);
    }
    for(int i=1; i<size; i++)
    {
        int j=i;
        while(j-1 >=0)
        {
            cout<<"Comparing "<<arr[j]<<" and "<<arr[j-1]<<"\n";
            if(arr[j] < arr[j-1])
            {
                cout<<"Swapping "<<arr[j-1]<<" and "<<arr[j]<<"\n";
                swap(arr[j], arr[j-1]);
                j--;
            }
            else break;
        }
    }

    for(int i=0; i<size; i++)
    {
        cout<<*(arr + i)<<" ";
    }
    return 0;
}