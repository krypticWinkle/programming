#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int m,n,x,temp,sum=0;//(mxn matrix)
    cout<<"Enter the dimension of the matrix:";
    cin>>m>>n;
    for(int i=0;i<m;i++)//while(m--)
    {
        temp=0;
        for(int j=0;j<n;j++)//while(n--)
        {
            cin>>x; temp=temp+x;
        }
        temp=temp*temp;
        sum = sum+temp;
    }
    cout<<"The squared sum of entries of each row is "<<sum<<"\n";
    return 0;
}