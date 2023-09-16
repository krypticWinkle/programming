#include<bits/stdc++.h>
using namespace std;
//DP 
int solve(vector<vector<int>>&w, int c, int r)
{
    int dp[r][c] = {0};

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            dp[i][j]=0;
            if(w[i][j] == 0)
            {
                continue;
            }
            if(i==0 && j == 0)
            {
                dp[i][j] = 1;
            }
            if(i-1>=0 && w[i-1][j]==1)
            {
                dp[i][j] = dp[i-1][j];
            }
            if(j-1>=0 && w[i][j-1]==1)
            {
                dp[i][j] = dp[i][j] + dp[i][j-1];
            }
        }
    }
    return dp[r-1][c-1];
}

int main()
{
    int n, m; cin>>n>>m;
    vector<vector<int>>w;
    for(int i=0; i<n; i++)
    {
        vector<int>a;
        for(int j=0; j<m; j++)
        {
            int x; cin>>x;
            a.push_back(x);
        }
        w.push_back(a);
    }
    cout<<solve(w, m, n);
    return 0;
}

/*
IP:
2 3
1 1 1
1 1 1
OP:3*/