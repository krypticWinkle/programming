#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ump unordered_map<int, int>
using namespace std;

/*
https://leetcode.com/problems/remove-duplicate-letters/ M
*/
int balancedStringSplit(string s) 
{
    int count = 0, l = 0, r = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'L')
        {
            l++;
        }
        else if(s[i] == 'R')
        {
            r++;
        }
        if(l == r)
        {
            l=0;
            r=0;
            count++;
        }
    }
    return count;
}

int32_t main()
{
    string str; cin>>str;
    cout<<balancedStringSplit(str);
    return 0;
}


