#include <bits/stdc++.h>
using namespace std;


int productSubSequenceCount(vector<int>&arr, int k)
{
	int n = arr.size();
	int dp[k + 1][n + 1];
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= k; i++) 
    {
		for (int j = 1; j <= n; j++) 
        {
	
			dp[i][j] = dp[i][j - 1];

			if (arr[j - 1] <= i)
				dp[i][j] += dp[i/arr[j-1]][j-1] + 1;
		}
	}
	return dp[k][n];
}

int main()
{
    int n; cin>>n;
	vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }

	int k; cin>>k;
	cout<<productSubSequenceCount(v, k)<<endl;
}
