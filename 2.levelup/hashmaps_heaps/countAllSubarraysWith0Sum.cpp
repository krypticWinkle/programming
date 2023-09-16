#include<bits/stdc++.h>
#define int long long
#define vi vector
#define endl "\n"
#define ump unordered_map
#define rep(i,a,b) for(int i=a; i<b; i++)
#define fs ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int countSubarrayWithZeroSum(vi<int>v)
{
    ump<int, vi<int>>hm;
    int sum = 0, maxSize = 0;
    rep(i, 0, v.size())
    {
        if(hm.find(sum + v[i]) == hm.end())
        {
            
        }
        else
        {
            
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
    cout<<countSubarrayWithZeroSum(v)<<endl;
    return 0;
}