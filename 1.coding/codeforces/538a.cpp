#include<iostream>
using namespace std;

void no ()
{
    cout<<"NO\n";
}
int main()
{
    int x,y,z; int a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(a>=x)
    {
        int p = a-x;
        if((b+p)>=y)
        {
            int q = (b+p)-y;
            if((c+q)>=z)
            {
                cout<<"YES\n";
            }
            else
            {
               no();
            }
        }
        else
        {
            no();
        }    
    }
    else
    {
       no();
    }
    return 0;
}