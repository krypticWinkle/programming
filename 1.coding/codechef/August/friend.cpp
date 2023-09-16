#include<bits/stdc++.h>
using namespace std;

int totalFriends(int n, int k, string &s)
{
    int last=-(1e5), ans = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
        {
            if(i-last <= k+1)
            {
                last = min(i+1, last+k);
            }
            else
            {
                ans++; last = i+1;
            }
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, k; cin>>n>>k;
        string s; cin>>s;
        cout<<totalFriends(n, k, s)<<"\n";
    }
    return 0;
}