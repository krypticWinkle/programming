#include<bits/stdc++.h>
using namespace std;
//leetcode 287 https://leetcode.com/problems/find-the-duplicate-number/submissions/
int findDuplicate(int nums[])
{
    int fast = nums[nums[nums[0]]];
    int slow = nums[nums[0]];
    while(slow != fast)//do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }//while(slow != fast);

    fast = nums[0];
    while(slow != fast)
    {
        fast = nums[fast];
        slow = nums[slow];
    }
    return fast;
}

int main()
{
    int arr [] = {1,3,4,2,2};
    cout<<findDuplicate(arr);
    return 0;
}