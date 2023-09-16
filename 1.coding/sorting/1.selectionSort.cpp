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
    //Selection sort logic begins below:
    for(int i=0; i<size-1; i++)
    {    
        int mini = i;//assuming ith element is minimum
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[mini])//updating the mini index whenever a smaller element is found
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);//finally swapping the minimum element of the iteration
    }
    //printing the sorted array
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}