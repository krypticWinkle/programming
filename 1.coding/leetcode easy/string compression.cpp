#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/encode-and-decode-strings/

int compress(vector<char>& chars) 
{
    char ch=chars[0]; string dummy="";
    int count=1; string ans = ch + dummy;
    for(int i=1; i<chars.size(); i++)
    {
        if(chars[i] ==chars[i-1])
        {
            count++;
        }
        else
        {
            if(count != 1)
            {
                ans += to_string(count);
                ans += chars[i];
                count=1;
            }
            else
            {
                ans += chars[i];
                count=1;
            }
                
        }
        if(i==chars.size()-1 && count!=1)
            ans+=to_string(count);
    }
    int xx = ans.size();
    for(int i=0; i<xx; i++)
    {
        chars[i] = ans[i];
    }
    return xx;
}

int main()
{
    return 0;
}