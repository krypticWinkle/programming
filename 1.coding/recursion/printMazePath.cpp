#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define vi vector<int, int>

using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{
    if(sr == dr && sc == dc)
    {
        cout<<psf<<endl;
        return;
    }
    if(sr > dr || sc > dc)
    {
        return;
    }
    printMazePaths(sr, sc+1, dr, dc, psf + "h");
    printMazePaths(sr+1, sc, dr, dc, psf + "v");
    
}


int32_t main()
{
    int n, m; cin>>n>>m;
    printMazePaths(0, 0, n - 1, m - 1, "");
    return 0;
}