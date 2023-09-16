#include<bits/stdc++.h>
using namespace std;

int main ()
{
   // int i,k=0,n; cin>>n; int l[5];l[k]=1; int max;
    int prev,curr,length = 1, max_length = 1;
    cin>>prev;
    if(prev!=-1)
    {
        while(1){
        cin>>curr;
        if(curr>prev)
        {
            length = length + 1;
            prev = curr;
            if(max_length<length){max_length=length;}else{  }
        }
        else if(curr==-1)
        {
            cout<<max_length; break;
        }
        else
        {
            prev = curr;
            if(max_length<length)
            {
                max_length=length;
            }
            else
            {  

            }
            length = 1;
        }
    }
    }
   /* int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            l[k]++;
        }
        else if(a[i]==-1)
            break;
        else
        {
            k=k+1;
            l[k]=1;
        }   
    }
    for(i=1;i<k;i++)
    {
        max = l[0];
        if (l[i]>l[i-1])
            max = l[i];
        else{   }
    }
    cout<<max;*/
    return 0;
}