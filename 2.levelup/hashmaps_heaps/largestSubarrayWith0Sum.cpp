#include<bits/stdc++.h>
#define int long long
#define vi vector
#define endl "\n"
#define ump unordered_map
#define rep(i,a,b) for(int i=a; i<b; i++)
#define fs ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int largestSubarrayWithZeroSum(vi<int>v)
{
    ump<int, int>hm;
    int sum = 0, maxSize = 0;
    rep(i, 0, v.size())
    {
        if(hm.find(sum + v[i]) == hm.end())
        {
            hm[sum + v[i]] = i;
            sum += v[i];
        }
        else
        {
            maxSize = max(maxSize, (i - hm[sum + v[i]]));
            sum += v[i];
        }
    }
    return maxSize;
}

int32_t main()
{
    fs;
    int size; cin>>size;
    vi<int> v(size, 0);

    rep(i,0,size)
    {
        cin>>v[i];
    }
    cout<<largestSubarrayWithZeroSum(v)<<endl;
    return 0;
}