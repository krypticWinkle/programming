#include<iostream>
#include<vector>
using namespace std;

//FollowUps
//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

int search(vector<int>&v, int target) 
{
    int l=0, h=v.size()-1;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(target == v[mid])
        {
            return mid;
        }
        else if(v[mid]>=v[l])
        {
            if(target < v[mid] && target >= v[l])
                h = mid-1;
            else
                l = mid+1;
        }
        else if(v[mid]<=v[h])
        {
            if(target <= v[h] && target > v[mid])
                l = mid+1;
            else
                h = mid-1;
        }
    }
    return -1;
}

int main()
{
    int size; cin>>size;
    vector<int>v(size, 0);
    int target; cin>>target;
    cout<<search(v, target)<<"\n";
    return 0;
}