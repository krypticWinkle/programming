#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>&v, int src, int dst)
{
    if(src == dst)return true;
    if(src > dst)return false;
    
    for(int i=1; i<=v[src]; i++)
    {
        if(check(v, src+i, dst))return true;
    }
    return false;
    
}

bool canJump(vector<int>& nums)
{
    if(check(nums, 0, nums.size()-1))
    {
        return true;
    }
    return false;
}
// LINEAR APPROACH (ALSO THE BEST)
/*
bool canJump(vector<int>& nums)
{
    int lastReachableIdx = nums.size()-1;
    
    for(int i=lastReachableIdx; i>=0; i--)
    {
        if(i + nums[i] >= lastReachableIdx)
            lastReachableIdx = i;
    }
    
    return (lastReachableIdx==0);
}
*/
int main()
{
    int size; cin>>size;
    vector<int>nums(size, 0);
    for(int i=0; i<size; i++)
    {
        cin>>nums[i];
    }
    cout<<canJump(nums);
    return 0;
}


/*
2 0 6 9 8 4 5 0 8 9 1 2 9 6 8 8 0 6 3 1 2 2 1 2 6 5 
3 1 2 2 6 4 2 4 3 0 0 0 3 8 2 4 0 1 2 0 1 4 6 5 8 0
7 9 3 4 6 6 5 8 9 3 4 3 7 0 4 9 0 9 8 4 3 0 7 7 1 9 
1 9 4 9 0 1 9 5 7 7 1 5 8 2 8 2 6 8 2 2 7 5 1 7 9 6

Ans: 0. O/p is also 0 but backtracking code is of exponential nature

*/