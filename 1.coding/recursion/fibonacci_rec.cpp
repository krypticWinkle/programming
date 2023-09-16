#include<bits/stdc++.h>
using namespace std;

int fibonacci(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }

    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
    
}
int main()
{
    int n, output;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    
    return 0;
}