#include<bits/stdc++.h>
using namespace std;

#define int long long

string fibonacciCon(int num, string *dp)
{
    if(num==0 || num==1)
    {
        return to_string(num);
    }
    if(dp[num] != '0'+"")
    {
        return dp[num];
    }
    string ans = (fibonacciCon(num-1, dp)) + (fibonacciCon(num-2, dp));
    dp[num] = ans;
    return ans;

}
int32_t main()
{
    
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    for(int i=0; i<t; i++)
    {
        int num, count = 0; cin>>num; int ans = 0; string dp[num+1];
        for(int j=0; j<=num; j++)
        {
            dp[j] = '0'+"";
        }
        string x = fibonacciCon(num, dp);
        int sizee = x.size();
        for(int j=0; j<sizee; j++)
        {
            if(x[sizee-j-1] == '1')
            {
                count++;
            }
        }
        ans = count * pow(2, sizee-1);
        cout<<ans<<"\n";
    }
    return 0;
}