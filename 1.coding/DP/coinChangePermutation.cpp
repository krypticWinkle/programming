#include<bits/stdc++.h>
using namespace std;

int getAllPermutation(int *coins, int &size, int &target)
{
    int dp[target + 1] = {1};
    for(int i=0; i<=target; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i - coins[j] >= 0)
            {
                dp[i] += dp[i - coins[j]];
            }
        }
    }
    return dp[target];
}

int main()
{
    int size; cin>>size;
    int coins[size];
    for(int i=0; i<size; i++)
    {
        cin>>coins[i];
    }
    int target; cin>>target;
    cout<<getAllPermutation(coins, size, target);
    return 0;
}