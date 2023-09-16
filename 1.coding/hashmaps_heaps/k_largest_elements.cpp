#include<bits/stdc++.h>
using namespace std;
int main ()
{
    priority_queue<int, vector<int>, greater<int>>pq;
    int size; cin>>size;
    int x;

    for(int i=0; i<size; i++)
    {
        cin>>x;
        pq.push(x);
    }
    int i=0;
    cin>>x;//top 'x' no. of elements that have to be printed
    while (i< size-x )
    {
        pq.pop();
        i++;
    }
    i=0;
    while (i<x )
    {
        cout<<pq.top();
        pq.pop();
        i++;
    }
    
    

    return 0;
}