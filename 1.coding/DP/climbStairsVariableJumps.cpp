#include<bits/stdc++.h>
using namespace std;

int totalWays(int* jumps, int totalStairs, int* arr)
{
    if(totalStairs == 0)
    {
        return 1;
    }
    else if(totalStairs < 0)
    {
        return 0;
    }
    if(arr[totalStairs] != 0)//Memoization
    {
        return arr[totalStairs];
    }
    int total_paths = 0;
    for(int i=1; i<=jumps[0]; i++)
    {
        total_paths += totalWays((jumps+i), totalStairs-i, arr);
    }
    arr[totalStairs] = total_paths;
    return total_paths;
}

//Tabulation
int totalWaysTabulation(int* jumps, int totalStairs)
{
    int dp[totalStairs+1] = {0};
    dp[totalStairs] = 1;

    for(int i=totalStairs-1; i>=0; i--)
    {
        for(int j=i+1; j<=i + jumps[i]; j++)
        {
            if(j <= totalStairs)
            {
                dp[i] += dp[j];
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
    //cout<<totalWays(jumps, totalStairs, arr);
    cout<<totalWaysTabulation(jumps, totalStairs);
    return 0;
}
/*
10
3 3 0 2 1 2 4 2 0 0
Ans: 5

6
3 3 0 2 2 3
Ans: 8*/