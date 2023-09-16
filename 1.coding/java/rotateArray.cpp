#include<bits/stdc++.h>
using namespace std;
#define int long long
void rotate(int* arr, int n, int k)
{
    k = k%n;
    if(k < 0)
    {
        k = k + n;
    }
    int l1=0, l2=n-k;
    int r1=n-k-1, r2=n-1;
    
    while(l1 < r1)
    {
        swap(arr[l1], arr[r1]);
        l1++; r1--;
    }
    while(l2 < r2)
    {
        swap(arr[l2], arr[r2]);
        l2++; r2--;
    }
    int l=0, r=n-1;
    while(l < r)
    {
        swap(arr[l], arr[r]);
        l++; r--;
    }
    
}

void display(int* arr, int n)
{
    for(int i = 0 ; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    int n, r;
    cin>>n;
    
    int* arr = new int[n];
    
    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}