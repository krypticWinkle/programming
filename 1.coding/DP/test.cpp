#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    for(x=0; x<3; x++)
    {
        switch(x)
        {
            case 2: cout<<x;
            case 0: cout<<x;
            default: break;
            case 3: cout<<x;
        }
    }
    return 0;
}