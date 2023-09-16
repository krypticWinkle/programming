#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base_sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int32_t main ()
{
    int size; cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    //Bubble sort logic begins below:
    for(int i=0; i<size-1; i++)
    {    
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    //printing the sorted array
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
