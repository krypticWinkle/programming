#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)
using namespace std;

//https://www.codechef.com/SNCK1B21/problems/LARGESTLADDU

int32_t main()
{
    xx;
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vi v(pow(2, n), 0);
        for(int i=0; i<pow(2,n); i++)
        {
            cin>>v[i];
        }
        int mini = *min_element(v.begin(), v.end());
        int maxi = *max_element(v.begin(), v.end());
        if(maxi-mini <= 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        /*int n; cin>>n; bool flag = 0;
        priority_queue<int, vi, greater<int>>pq;
        for(int i=0; i<pow(2, n); i++)
        {
            int x; cin>>x;
            pq.push(x);
        }
        while(pq.size() > 1)
        {
            int ff = pq.top(); pq.pop();
            int ss = pq.top(); pq.pop();
            if(abs(ff-ss) > 1)
            {
                cout<<"NO"<<endl;
                flag = 1; break;
            }
            else
            {
                pq.push(ff+ss);
            }
        }
        if(pq.size() == 1 && flag == 0)
            cout<<"YES"<<endl;*/


    }
    return 0;
}

/*brute force sahi wala
4-------2
4-------3
6-------4
6-------5
6-------6
8
8
8
8
10
10
10
10
10
12
12
12
12
12
12
14
14
14
14
14
14
14
16
16
16
16
16
16
16
16
18
18
18
18
18
18
18
18
18
20
20
20
20
20
20
20
20
20
20
22
22
22
22
22
22
22
22
22
22
22
24
24
24
24
24
24
24
24
24
24
24
24
26
26
26
26
26
26
26
26
26
26
26
26
26
28
28
28
28
28
28
28
28
28
*/