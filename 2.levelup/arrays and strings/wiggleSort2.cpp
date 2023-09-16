#include<bits/stdc++.h>
using namespace std;

//wiggleSort 2:

void wiggleSort2(vector<int>& nums) 
{
    if(nums.size() == 0 || nums.size() == 1)
        return;
    sort(nums.begin(), nums.end());
    vector<int>tmp(nums.size(), 0);
    int j = nums.size()-1;
    
    int i=1;
    while(j >= 0)
    {
        tmp[i]=nums[j];
        j--;
        i+=2;
        if(i>=nums.size())
            i = 0;

    }
    nums = tmp;
}

int main()
{
    int size; cin>>size;
    vector<int>a;
    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        a.push_back(x);
    }
    wiggleSort2(a);
    
    for(int i=0; i<size; i++)
        cout<<a[i]<<" ";
        
    return 0;
}