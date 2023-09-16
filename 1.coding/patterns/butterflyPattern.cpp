#include<iostream>
using namespace std;

int main ()
{
    int size; cin>>size;
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<2*size - 1; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
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