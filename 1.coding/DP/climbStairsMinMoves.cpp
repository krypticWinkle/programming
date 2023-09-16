#include<bits/stdc++.h>
using namespace std;


//Tabulation
int totalWaysTabulation(int* jumps, int totalStairs)
{
    int dp[totalStairs + 1]={-1};
    for(int i=0; i<totalStairs; i++)
    {
        dp[i] = -1;
    }
    dp[totalStairs] = 0;

    for(int i=totalStairs-1; i>=0; i--)
    {
        if(jumps[i] > 0)
        {
            int mini = 100000;
            for(int j=1; j<=jumps[i] && i+j < totalStairs+1; j++)
            {
                if(dp[i+j] != -1)
                {
                    mini = min(mini, dp[i+j]);
                }
            }
            if(mini != 100000)
            {
                dp[i] = mini + 1;
            }
        }
    }
    return dp[0];
}

int main()
{
    int totalStairs; cin>>totalStairs;
    int jumps[totalStairs];//i.e. from what stair, how much can we jump
    int arr[totalStairs+1] = {0};
    for(int i=0; i<totalStairs; i++)
    {
        cin>>jumps[i];
    }
    //cout<<min(5, 111);
    cout<<totalWaysTabulation(jumps, totalStairs);
    return 0;
}

/*
10
3 3 0 2 1 2 4 2 0 0
Ans: 4

6
4 2 0 2 2 3
Ans: 2*/