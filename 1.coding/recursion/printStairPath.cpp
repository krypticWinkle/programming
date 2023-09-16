#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define vi vector<int, int>

using namespace std;

void printAllStairPaths(int n, string psf)
{
    if(n==0)
    {
        cout<<psf<<endl;
        return;
    }
    if(n<0)
    {
        return;
    }
    printAllStairPaths(n-1, psf+"1");
    printAllStairPaths(n-2, psf+"2");
    printAllStairPaths(n-3, psf+"3");
}

int32_t main()
{
    int n; cin>>n;
    printAllStairPaths(n, "");
    return 0;
}