#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& a)
    {
        int maxP = INT_MIN, prodL=1, prodR=1;
        for(int i=0; i<a.size(); i++)
        {
            prodL *= a[i];
            prodR *= a[a.size() - 1 - i];
            
            if(maxP < max(prodL, prodR))
                maxP = max(prodL, prodR);
            
            if(prodL == 0)
                    prodL = 1;
            if(prodR == 0)
                    prodR = 1;
            
            
        }
        return maxP;
    }
};














//Ye neeche wala link ka problem kiya nhi hai par karna hai
//https://leetcode.com/problems/rearrange-string-k-distance-apart/






















class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int max1=nums[0], max2=nums[1], max3=nums[2];
        if(abs(max1) < abs(max2))
            swap(max1, max2);
        if(abs(max2) < max3)
            swap(max2, max3);
        if(abs(max1) < abs(max2))
            swap(max1, max2);
        
        for(int i=3; i<nums.size(); i++)
        {
            if(nums[i] > max3)
            {
                if(nums[i] > max2)
                {
                    max3 = max2;
                    max2 = nums[i];
                    if(max2 > max1)
                    {
                        swap(max1, max2);
                    }
                }
                else
                {
                    max3 = nums[i];
                }
            }
        }
        return max1*max2*max3;
        
    }
};











class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int max1=nums[0], max2=nums[1], max3=nums[2];
        if(max1 < max2)
            swap(max1, max2);
        if(max2 < max3)
            swap(max2, max3);
        if(max1 < max2)
            swap(max1, max2);

        for(int i=3; i<nums.size(); i++)
        {
            if(nums[i] > max3)
            {
                if(nums[i] > max2)
                {
                    max3 = max2;
                    max2 = nums[i];
                    if(max2 > max1)
                    {
                        swap(max1, max2);
                    }
                }
                else
                {
                    max3 = nums[i];
                }
            }
        }
        int min1=nums[0], min2=nums[1];
        if(min1>min2)swap(min1,min2);
        for(int i=2; i<nums.size(); i++)
        {
            if(nums[i] < min2)
            {
                min2=nums[i];
                if(min1 > min2)
                {
                    swap(min1, min2);
                }
            }
        }
        cout<<min1<<" "<<min2;
        return max(max1*max2*max3, min1*min2*max1);
        
    }
};












class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int xorNums=nums[0], xorAll=0;
        for(int i=1; i<nums.size(); i++)
        {
            xorNums = xorNums ^ nums[i];
        }
        for(int i=1; i<=nums.size(); i++)
        {
            xorAll = xorAll ^ i;
        }
        return xorAll ^ xorNums;
    }
};














class Solution {
public:
    string reorganizeString(string s) 
    {
        map<char, int>hm;
        for(int i=0; i<s.size(); i++)
        {
            hm[s[i]]++;
        }
        priority_queue<pair<int, char>>pq;
        for(auto it: hm)
        {
            pair<int, char>pr;
            pr.first = it.second;
            pr.second = it.first;
            pq.push(pr);
        }
        //char c = '0';
        string ans; int i=0;
        ans.append(s.size(), '0');
        
        while(pq.size() != 0)
        {
            pair<int, char> popped = pq.top();
            pq.pop();
            while(popped.first != 0)
            {
                popped.first = popped.first-1;
                ans[i] = popped.second;
                if(i > 0 && ans[i] == ans[i-1])
                {
                    ans = "";
                    return ans;
                }
                if(i == s.size() - 2)
                {
                    i =( i+3)%s.size();
                }
                else
                {
                    i = (i+2)%s.size();
                }
            }
            
        }
        return ans;
    }
};