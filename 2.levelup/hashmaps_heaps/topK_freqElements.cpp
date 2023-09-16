#include<bits/stdc++.h>
using namespace std;

static bool cmpr(pair<int, int>a, pair<int, int>b)
{
    return a.second > b.second;
}

vector<int> topKFrequent(vector<int>& nums, int k) 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    unordered_map<int, int>hm;
    int x = nums.size();
    for(int i=0; i<x; i++)
    {
        if(hm.find(nums[i]) == hm.end())
            hm[nums[i]] = 1;
        else
            hm[nums[i]]++;
    }
    vector<pair<int, int>>p;
    
    for(auto it: hm)
    {
        p.push_back({it.first, it.second});
    }
    sort(p.begin(), p.end(), cmpr);
    
    vector<int>ans;
    for(int i=0; i<k; i++)
    {
        ans.push_back(p[i].first);
    }
    return ans;
}

int main()
{
    int size, k; cin>>size>>k;
    vector<int>nums;

    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        nums.push_back(x);
    }
    vector<int>ans = topKFrequent(nums, k);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
}

/*
ip: 6 2 (size = 6, and print top 2 frequent elements)
1 1 1 2 2 3
op: 1 2
*/