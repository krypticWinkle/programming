//rotated about its axis by 180 degrees
#include<iostream>
using namespace std;

int main ()
{
    int size; cin>>size;
    
    for(int i=size; i>0; i--)
    {
        int j=0;
        for(j=0; j<i-1; j++)
        {
            cout<<" ";
        }
        while(j < size)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
    }
    return 0;
}

/*
I/P: 5
O/P:
    *
   **
  ***
 ****
*****
*/