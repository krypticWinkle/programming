#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i,x,y,testcase;
    cin>>testcase;
    for(i=0;i<testcase;i++)
    {
        x=0;y=0;
        cin>>x>>y;
        if(x==y)
            cout<<x-1<<" "<<y<<"\n";
        else if(x<y)
        {
            if(x==1)
                cout<<"0 "<<y<<"\n";
            else
            {
                cout<<x-1<<" "<<y<<"\n";
            }    
        }
        else
        {
            cout<<x-1<<" "<<y<<"\n";
        }
        
    }
    return 0;
}