#include<iostream>
using namespace std;

int main ()
{
    int size; cin>>size;
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<i+1;
        }
        cout<<"\n";
    }
    return 0;
}
/*
i/p: 7
o/p:
1
22
333
4444
55555
666666
7777777
*/