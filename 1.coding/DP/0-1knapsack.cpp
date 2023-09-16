#include<bits/stdc++.h>
using namespace std;

int main()
{
    int total_items; cin>>total_items;//total items available with us
    int val[total_items], wts[total_items];

    for(int i=0; i<total_items; i++)//value of each item
    {
        cin>>val[i];
    }
    for(int i=0; i<total_items; i++)//weight of each item
    {
        cin>>wts[i];
    }
    int capacity_bag; cin>>capacity_bag;
    int dp[total_items+1][capacity_bag+1];

    /*Initialization of the dp[][] array:*/

    for(int i=0; i<=total_items; i++)
    {
        for(int j=0; j<=capacity_bag; j++)
        {
            dp[i][j] = 0;
        }
    }

    /*Logic below:*/

    for(int i=1; i<=total_items; i++)
    {
        for(int j=1; j<=capacity_bag; j++)
        {
            if(j-wts[i-1] >= 0)
            {    
                if(dp[i-1][j] > val[i-1] + dp[i-1][j-wts[i-1]])
                {
                    dp[i][j] = dp[i-1][j];
                }
                else
                {
                    dp[i][j] = val[i-1] + dp[i-1][j-wts[i-1]];
                }
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    // for(int i=0; i<=total_items; i++)
    // {
    //     for(int j=0; j<=capacity_bag; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<dp[total_items][capacity_bag]<<"\n";
    

    return 0;
}