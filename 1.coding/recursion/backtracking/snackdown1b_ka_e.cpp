#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ump unordered_map<int, int>
using namespace std;
int n,k;
void solve()
{
    cin>>n>>k;
    if(k==0)
    {
        cout<<"YES"<<endl;
        cout<<0<<endl;
        return;
    }
    if(k%2==0)
    {
        cout<<"No"<<endl;;
        return;
    }
    int sz=0;
    for(int i=31;i>=0;i--)
    {
        if(((1<<i)&k)!=0)
        {
            sz=i+1;
            break;
        }
    }
    k=(k+(1<<sz)-1)/2;
    cout<<"YES"<<endl;
    cout<<sz<<endl;
    int ans=1;
    vector<int> a;
    for(int i=sz-2;i>=0;i--)
    {
        if(((1<<i)&k)!=0)
        {
            a.push_back(ans);
            ans+=(1<<i);
        }
        else
        {
            ans-=(1<<i);
            a.push_back(ans);
        }
    }
    for(int i=sz-2;i>=0;i--)
        cout<<a[i]<<endl;
    cout<<ans<<endl;
}

int32_t main()
{
    xx;
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}