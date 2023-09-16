#include<bits/stdc++.h>
using namespace std;

int calculate(int n, int a)
{
    n = sqrt(n);
    if(n==1)
        return a;
    else
        return a * n;
}

int main()
{    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;cin>>t;
    for(int i=0; i<t; i++)
    {
        long n, a; cin>>n>>a;

        cout<<calculate(n, a)<<"\n";

    }
    return 0;
}