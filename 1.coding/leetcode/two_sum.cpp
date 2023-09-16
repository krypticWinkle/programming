#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int* ptr;
    int n,target; int i,j;
    cin>>n;
    ptr = (int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    cin>>target;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((*(ptr+i) + *(ptr+j))==target)
            {
                cout<<"["<<i<<","<<j<<"]"<<"\n";
                break;
            }
        }
    }
    return 0;
}