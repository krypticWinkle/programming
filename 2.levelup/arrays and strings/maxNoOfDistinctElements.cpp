#include<bits/stdc++.h>
#define int long long
using namespace std;

//https://www.codechef.com/SNCKQL21/problems/MAXDISTKT

int32_t main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int size; cin>>size;
        vector<pair<int, int>>v;
        for(int i=0; i<size; i++)
        {
            int tmp; cin>>tmp;
            v.push_back({tmp, i});
        }
        sort(v.begin(), v.end());

        vector<pair<int, int>>ans;
        int k=1;
        
        ans.push_back({v[0].second, 0});
        for(int i=1; i<size; i++)
        {
            ans.push_back({v[i].second, k});

            if(k != v[i].first)
                k++;
        }
        sort(ans.begin(), ans.end());

        for(int i=0; i<size; i++)
        {
            cout<<ans[i].second<<" ";
        }
        cout<<"\n";
    }
    return 0;
}