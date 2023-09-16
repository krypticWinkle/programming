#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>>pq;
    int size, displacement;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cin>>displacement;
    for(int i=0; i<=displacement; i++)
    {
        pq.push(arr[i]);
    }
    for(int i=displacement+1; i<size; i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
        pq.push(arr[i]);
    }
    for(int i=displacement; i>=0; i--)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}