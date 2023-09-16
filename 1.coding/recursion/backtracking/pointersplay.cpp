#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][5];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\n\n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<**(a + (i*3) + j)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}