#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int>&nums)
{
    int maxSum=INT_MIN, sum = 0;
    for(int i=0; i<nums.size(); i++)
    {
        if(sum + nums[i] >= nums[i])
        {
            sum += nums[i];
        }
        else
        {
            sum = nums[i];
        }

        if(sum > maxSum)
            maxSum = sum;
        

    }
    return maxSum;

    //for Min sum:
    /*
    int minSum = INT_MAX;
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        if(sum + a[i] <= a[i] )
        {
            sum += a[i];
        }
        else
        {
            sum = a[i];
        }

        if(sum < minSum)
            minSum = sum;
        
    }*/
}

int main()
{
    int size; cin>>size;
    vector<int>nums(size, -1);
    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        nums[i] = x;
    }
    cout<<maxSumSubarray(nums);
    return 0;
}