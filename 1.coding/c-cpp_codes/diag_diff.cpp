#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x; int sum=0,sum2=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>x;
            if(i==j)
            {
                sum=sum+x;
                if((i+j)==(n+1))
                    sum2=sum2+x;
            }
            else if((i+j)==(n+1))
                 sum2=sum2+x;
            else{

            }
        }
    }
    cout<<abs(sum-sum2)<<"\n";
    return 0;
}