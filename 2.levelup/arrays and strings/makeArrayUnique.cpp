#include<bits/stdc++.h>
using namespace std;
//Leetcode 945

void increment(unordered_map<int, int>&hm, vector<int>& nums, int i)
{
    hm[nums[i]]--;
    nums[i]++;
    hm[nums[i]] += 1;
}

int minIncrementForUnique(vector<int>& nums)
{
    unordered_map<int, int>hm;
    int count = 0;
    int k = nums.size();
    for(int i=0; i<k; i++)
    {
        if(hm.find(nums[i]) == hm.end())
        {
            hm[nums[i]] = 1;
        }
        else
        {
            hm[nums[i]]++;
        }
    }

    // for(int i=0; i<k; i++)
    // {
    //     while(hm[nums[i]] > 1)
    //     {
    //         count++;
    //         increment(hm, nums, i);
    //     }
    // }

    for(auto x : hm)
        {
            cout<<!x.second<<" ";
            if(!x.second) 
            {
                cout<<x.second<<" "; 
                continue;
            }
            //count += (x.second - 1);
            //hm[x.first + 1] += x.second - 1;
        }
    return count;
}

int main()
{
    int N; cin>>N;
    vector<int>nums;
    for(int i=0; i<N; i++)
    {
        int x; cin>>x;
        nums.push_back(x);
    }
    int ans = minIncrementForUnique(nums);
    
    //cout<<ans<<" ";
    return 0;
}