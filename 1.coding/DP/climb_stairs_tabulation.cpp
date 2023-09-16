#include<bits/stdc++.h>
using namespace std;

//Solved assuming that we're going from nth to 0th stair (can take upto 3 steps at a time)

int pathsCountTabulation(int total_stairs)
{
    int dp[total_stairs + 1] = {0};
    dp[0] = 1;// 0 to 0 -> 1 way
    //at dp[i], we are storing how many ways are there to go from ith to 0th step
    for(int i=1; i<=total_stairs; i++)
    {
        if(i==1)
        {
            dp[i] = 1;//i.e. from 1st stair, you take 1 step and reach 0
        }
        else if(i==2)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        else
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
    }
    return dp[total_stairs];
}

int main()
{
    int total_stairs; cin>>total_stairs;
   //int prevSol[total_stairs + 1] = {0};
    int ans = pathsCountTabulation(total_stairs);
    cout<<ans;
    return 0;
}

/*
ip:5
op:13*/