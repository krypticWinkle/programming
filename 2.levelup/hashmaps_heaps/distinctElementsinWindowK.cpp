#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ump unordered_map
using namespace std;

vector<int> distinctElements(vector<int>v, int k)
{
    map<int, int>hm; vector<int>ans;
    for(int i=0; i<k; i++)
    {
        hm[v[i]]++;
    }
    ans.push_back(hm.size());
    for(int i=k; i<v.size(); i++)
    {
        if(hm[v[i-k]] == 1)
        {
            hm.erase(v[i-k]);
        }
        else
        {
            hm[v[i-k]]--;
        }
        hm[v[i]]++;
        ans.push_back(hm.size());
    }
    return ans;
}

int32_t main()
{
    int size; cin>>size;
    vector<int> v(size, 0);
    for(int i=0; i<size; i++)
    {
        cin>>v[i];
    }
    int k; cin>>k;
    vector<int>ans = distinctElements(v, k);
    
    for(int i=0; i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}