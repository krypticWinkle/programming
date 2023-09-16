#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ump unordered_map<int, int>
using namespace std;

/*
https://leetcode.com/problems/increasing-subsequences/ M
https://leetcode.com/problems/number-of-ways-where-square-of-number-is-equal-to-product-of-two-numbers/ M
https://leetcode.com/problems/map-of-highest-peak/ M

*/
int findContentChildren(vector<int>& g, vector<int>& s) 
{
    int j=0, count=0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    for (int i=0; j<g.size() && i<s.size();i++)
    {
        if(s[i] >= g[j])
        {
            j++;
            count++;
        }
        
    }
    return count;
}


//LC 455
int main()
{
    return 0;
}