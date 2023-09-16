#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)
using namespace std;

int32_t main()
{
    xx;
    int tc; cin>>tc;
    while(tc--)
    {
        // int k; cin>>k;
        // int i=1, ans=0;
        // int sum=0;
        // while(k > 0)
        // {
        //     k = k - i;
        //     ans++; i++;
        // }
        // cout<<ans*2<<endl;





        int k; cin>>k;
    	if(k==2 || k==3)
    	{
    	    cout<<4<<endl;
    	}
    	
    	else
        {
            int i=1; float ans_float=0.0f;
            int ans_int = 0;
            int sum=0;
            ans_float = (sqrt(1+8*k)-1)/2;
            ans_int = (sqrt(1+8*k)-1)/2;

            if(ceil(ans_float) != ceil(ans_int))
            {
                ans_int++;
            }

            cout<<ans_int*2<<endl;
        }
    }
    return 0;
}










/*galat wala
4
4
6
6
6
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