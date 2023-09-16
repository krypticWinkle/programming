#include<bits/stdc++.h>
using namespace std;

//Source: Apna College: 8.4
int subArraySum(int *a, int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            sum+=a[j];
        }
    }
    return sum;
}

int main()
{
    int size; cin>>size;
    int a[size];
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    cout<<subArraySum(a, size);
    
    return 0;
}