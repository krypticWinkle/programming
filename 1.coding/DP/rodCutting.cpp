#include<bits/stdc++.h>
using namespace std;

int maxProfit(int rodLen, int *price, int *dp)
{
    if(rodLen <= 0)
    {
        return 0;
    }
    if(dp[rodLen] != 0)
    {
        return dp[rodLen];
    }
    int max_value = INT_MIN;
    for(int i=1; i<=rodLen; i++)
    {
        max_value = max(max_value, price[i-1] + maxProfit(rodLen-i, price, dp));
    }
    dp[rodLen] = max_value;
    return max_value;
}
int32_t main ()
{
    int rodLen; cin>>rodLen;
    int price[rodLen];

    for(int i=0; i<rodLen; i++)
    {
        cin>>price[i];
    }
    int dp[rodLen+1] = {price[rodLen - 1]};
    cout<<maxProfit(rodLen, price, dp)<<"\n";
    return 0;
}