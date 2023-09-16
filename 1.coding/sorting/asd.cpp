#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    int ans[100] = {0};
    for(int i=0; i<n; i++)
    {
        ans[arr[i]]++;
    }
    for(int i=0; i<100; i++)
    {
        cout<<ans[i]<<" ";
    }   
    return 0;
}