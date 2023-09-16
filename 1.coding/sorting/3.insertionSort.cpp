#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int32_t main ()
{
    xx;
    int size; cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    //Insertion sort logic begins below:
    for(int i=1; i<size; i++)
    {
        int j=i;
        while(j > 0 && arr[j] < arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
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
