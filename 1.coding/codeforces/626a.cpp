#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i,j,n,testcase; 
    int* ptr;
    cin>>testcase;
    for(i=0;i<testcase;i++)
    {
        cin>>n;
        ptr = (int*)calloc(n,sizeof(int));
        for(j=0;j<n;j++)
        {
            cin>>*(ptr + j);
        }
        for(j=0;j<n;j++)
        {
            if((n==1)&&(*(ptr+0)%2==1))
            {
                cout<<"-1\n";
            }
            else
            {
                if(*(ptr + j)%2==0)//1st number is even
                {
                    cout<<"1\n1\n";
                }
                else //1st number is odd
                {
                    if(*(ptr+1)%2==1) //2nd number is odd
                    {
                        cout<<"2\n1 2\n";
                    }
                    else//2nd number is even
                    {
                        cout<<"1\n2\n";
                    }
                }
            }
            break;
        } 
    }
    return 0;
}