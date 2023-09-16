#include<iostream>
using namespace std;

int main ()
{
    int size; cin>>size;
    
    for(int i=size; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

/*
I/P: 5
O/P:
*****
****
***
**
*
*/