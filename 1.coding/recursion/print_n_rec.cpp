#include<bits/stdc++.h>
using namespace std;

void print(int num)
{
    if(num == 1)
    {
        cout<<1<<" ";
    }
    else
    {
        print(num-1);
        cout<<num<<" ";

    }
    
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}