#include<bits/stdc++.h> //September Kickstart
#define long long int
using namespace std;

//https://codingcompetitions.withgoogle.com/kickstart/round/0000000000435bae/0000000000887c32

void solve(int n)
{
    string str; cin>>str; int k = str.size();
    int ans[k] = {0}, left[k] = {0}, right[k] = {0};

    stack<char>s, s2; int cnt=0;
    for(int i=k-1; i>=0; i--)
    {
        if(str[i] == '0')
        {    
            if(s.empty() == true)
            {
                right[i] = INT_MAX;
                s.push('0');
                cnt++;
            }
            else
            {
                while(s.size() != 0 && s.top() == '0')
                {
                    s.pop(); cnt++;
                }
                if(s.empty() == true)
                {
                    right[i] = INT_MAX;
                    s.push('0');
                    cnt++;
                }
                else{
                    right[i] = cnt;
                    s.push('0');
                }
            }
        }
        else{
            right[i] = 0;
            s.push('1');
            cnt=1;
        }
    }
    string str2 = str; reverse(str2.begin(), str2.end()); cnt = 0;
    for(int i=k-1; i>=0; i--)
    {
        if(str2[i] == '0')
        {    
            if(s2.empty() == true)
            {
                left[i] = INT_MAX;
                s2.push('0');
                cnt++;
            }
            else
            {
                while(s2.size() != 0 && s2.top() == '0')
                {
                    s2.pop(); cnt++;
                }
                if(s2.empty() == true)
                {
                    left[i] = INT_MAX;
                    s2.push('0');
                    cnt++;
                }
                else{
                    left[i] = cnt;
                    s2.push('0');
                }
            }
        }
        else{
            left[i] = 0;
            s2.push('1');
            cnt=1;
        }
    }

    // for(int i=0; i<k; i++){cout<<right[i]<<" ";}cout<<"\n";
    // for(int i=0; i<k; i++){cout<<left[i]<<" ";}
    int sum=0;
    for(int i=0; i<k; i++)
    {
        sum +=min(right[i], left[k-1-i]);
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