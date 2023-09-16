#include<bits/stdc++.h>
using namespace std;

//this is greedy approach an wrong
int maxProfit(int* v, int sizee)
{
    int dp[sizee];
    for(int i=0; i<sizee; i++)
    {
        int profit=v[i];
        for(int j=i; j<sizee;)
        {
            for(int k=j+1; k<sizee; k++)
            {
                if(v[k] > v[j] && v[k]%v[j]==0)
                {
                    profit += v[k];
                    j = k;
                }
            }
            dp[i] = profit;
            break;
        }
    }
    int maxi = dp[0];
    for(int i=1; i<sizee; i++)
    {
        if(maxi < dp[i])
        {
            maxi = dp[i];
        }
    }
    return maxi;
}

int main()
{
    int sizee; cin>>sizee;
    int v[sizee];

    for(int i=0; i<sizee; i++)
    {
        cin>>v[i];
    }

    cout<<maxProfit(v, sizee);
    return 0;
}

/*
i/p:
4
2 5 6 10
o/p:
 15

consider this. this approach will fail there 
i/p:
4
2 5 6 14
o/p:
8 (wrong)*/