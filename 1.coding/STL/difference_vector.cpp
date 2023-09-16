/*An array all initialized to 0. We then have q queries. In each query, we've 2 values L and R. 
Increase all values from L to R by 1. Print final array*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int queries, l, r;
    vector<int>array(7, 0);
    cin>>queries;
    while(queries--)
    {
        cin>>l>>r;
        array[l]++;
        if(r+1 < 7)
        {
            array[r+1]--;
        }
    }
    for(int i=1; i<7;i++)
    {
        array[i] += array[i-1];
    }
    for(int i=0; i<7;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}