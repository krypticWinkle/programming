#include<bits/stdc++.h>
using namespace std;
#define int long long

int totalCombinations(int *coins, int size, int target)
{
    int dp[target + 1] ={0};
    dp[0] = 1;
    for(int i=0; i<size; i++)
    {
        for(int j=coins[i]; j<=target; j++)
        {
            dp[j] += dp[j-coins[i]];
        }
    }
    return dp[target];
}

int32_t main()
{
    int size; cin>>size;
    int coins[size];
    for(int i=0; i<size; i++)
    {
        cin>>coins[i];
    }
    int target; cin>>target;
    cout<<totalCombinations(coins, size, target)<<endl;

    return 0;
}