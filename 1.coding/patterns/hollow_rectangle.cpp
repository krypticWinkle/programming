#include<iostream>
using namespace std;

int main ()
{
    int size; cin>>size;
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i==0 || i== size-1)
            {
                cout<<"*";
            }
            else if(j==0 || j== size-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

/*
I/P: 5
O/P:
*****
*   *
*   *
*   *
*****
*/