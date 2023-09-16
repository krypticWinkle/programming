#include<bits/stdc++.h>
using namespace std;




class Solution 
{
 public:
    vector<int> nextGreaterElements(vector<int>& nums2) 
    {
        stack<int>st;
        vector<int>ngr(nums2.size(), -1);
        int front_counter=0;
        for(int i=nums2.size()-1; i>=0; i--)
        {
            if(st.size() != 0 && nums2[st.top()] > nums2[i])
            {
                ngr[i] = nums2[st.top()];
            }
            while(st.size() != 0 && nums2[st.top()] <= nums2[i])
            {
                st.pop();
            }
            if(st.size() == 0)
            {
                while(nums2[i] >= nums2[front_counter] && front_counter < i)
                {
                    front_counter++;
                }
                if(i > front_counter){ngr[i] = nums2[front_counter];}
            }
            else
            {
                ngr[i] = nums2[st.top()];
            }
            st.push(i);
        }
        
        return ngr;
    }
};