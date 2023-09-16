#include<bits/stdc++.h>
#define int long long
using namespace std;

// GFG Medium
vector<int> findSubarray(vector<int>v, int k)
{
    int sum = 0, idx = 0;
    vector<int> ans(1, -1);
    for(int i=0; i<v.size(); i++)
    {
        sum += v[i];
        if(sum == k)
        {
            ans[0] = idx+1;
            ans.push_back(i+1);
            return ans;
        }
        else if(sum > k)
        {
            sum -= v[idx]; 
            sum -= v[i];
            idx++; i--;
        }
    }
    return ans;
}
/*              O(n^2) approach

long long sum = 0; vector<int>ans(1, -1);
for(int i=0; i<n; i++)
{
    int first_idx = i;
    for(int j=i; j<n; j++)
    {
        sum += arr[j];
        if(sum == s)
        {
            ans[0] = i+1;
            ans.push_back(j+1);
            return ans;
        }
        else if(sum > s)
        {
            sum = 0;
            break;
        }
    }
}
return ans;

*/
int32_t main()
{
    int size; cin>>size;
    vector<int>v(size, 0);
    for(int i=0; i<size; i++)
    {
        cin>>v[i];
    }
    int k; cin>>k;
    vector<int>ans = findSubarray(v, k);

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";

    return 0;
}

/*
[906299, 971402, 993362, 997095, 18607]
2118
*/