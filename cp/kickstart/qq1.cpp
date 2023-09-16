#include<bits/stdc++.h> //September Kickstart
#define long long int
using namespace std;

//https://codingcompetitions.withgoogle.com/kickstart/round/0000000000435bae/0000000000887c32

void solve(int n)
{
    string str; cin>>str; int k = str.size(); int cnt=0;
    int ans[k] = {0}, left[k] = {0}, right[k] = {0};

    for(int i=0; i<k; i++)
    {
        if(str[i]=='1')
        {
            right[i] = 0;
        }
        else
        {
            int j=i+1;
            if(j<k)
            {    
                while(str[j] != '1')
                {
                    cnt++;j++;
                }
                if(j!=k)
                {
                    right[i] = ++cnt;
                    cnt = 0;
                }
                else
                {
                    right[i] = INT_MAX;
                }
            }
        }
    }
    cnt = 0;
    for(int i=k-1; i>=0; i--)
    {
        if(str[i]=='1')
        {
            right[i] = 0;
        }
        else
        {
            int j=i-1;
            if(j>=0)
            {    
                while(str[j] != '1')
                {
                    cnt++;j--;
                }
                if(j >= 0)
                {
                    left[i] = ++cnt;
                    cnt = 0;
                }
                else
                {
                    left[i] = INT_MAX;
                }
            }
        }
    }

    int sum=0;
    for(int i=0; i<k; i++)
    {
        sum +=min(right[i], left[i]);
    }
    cout<<sum<<"\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc;

    for(int i=0; i<tc; i++)
    {
        cout<<"Case #"<<i+1<<": ";
        int n; cin>>n;
        solve(n);
    }
    return 0;
}
/*
ip:
2
3
111
6
100100
op:
Case #1: 0
Case #2: 5

*/