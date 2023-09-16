#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    //return a==0 ? b : gcd(b%a, a);
    //it means if a is 0, return b otherwise make recursive call.
    if(a==0)
    {
        return b;
    }
    int ans = gcd(b%a, a);
    return ans;
}

int main()
{
    int tc; cin>>tc;
    for(int i=0; i<tc; i++)
    {
        int a, b;
        cin>>a>>b;

        cout<<gcd(a, b)<<"\n";
    }
    return 0;
}