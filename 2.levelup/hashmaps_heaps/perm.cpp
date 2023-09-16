#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ump unordered_map
using namespace std;
//codeforces
int32_t main()
{
    xx;
    int tc; cin>>tc;
    while(tc--)
    {
        int n,a,b; cin>>n>>a>>b;
        if(a > (n/2) + 1 || b < (n/2) )
        {
            cout<<"-1"<<endl;
        }
        else if((b == (n/2) && a < b)|| (a == (n/2) && b < a))
        {
            cout<<"-1"<<endl;
        }
        else if((a>n/2 && b>n/2) || (a<n/2 && b<n/2))
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<a<<" ";
            int i;
            for(i=n; i>((n/2)); i--)
            {    
                if(i!=b && i!=a)
                {
                    cout<<(i)<<" ";
                }
            }
            while(i > 0)
            {
                if(i != a && i != b)
                {
                    cout<<i<<" ";
                }
                i--;
            }
            cout<<b<<endl;
        }
    }
    return 0;
}

