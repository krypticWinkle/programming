#include<bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/ M


//lc 1283
int smallestDivisor(vector<int>& nums, int th)
{
    int sum, n = nums.size();
    int l=1, r = *max_element(nums.begin(), nums.end());


    while(l < r)
    {
        int i = (l+r)/2; sum = 0;
        for(int j=0; j<n; j++)
        {
            if(nums[j]%i==0)
            {
                sum += (nums[j]/i);
            }
            else
            {
                sum += (nums[j]/i) + 1;
            }
        }
        
        if(sum <= th)
        {
            r = i;
        }
        else
        {
            l=i+1;
        }
        

    }
    return l;
}

int main()
{
    int n; cin>>n;
    vector<int>v(n, 0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int th; cin>>th;
    cout<<smallestDivisor(v, th);
    return 0;
}