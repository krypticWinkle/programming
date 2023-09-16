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
    for(int i=1; i<=dc-sc; i++)
    {
        printMazePaths(sr, sc+i, dr, dc, psf + "h" + to_string(i));
    }
    for(int i=1; i<=dr-sr; i++)
    {
        printMazePaths(sr+i, sc, dr, dc, psf + "v" + to_string(i));
    }
    
    for(int i=1; i<=dc-sc && i <= dr-sr; i++)
    {
        printMazePaths(sr+i, sc+i, dr, dc, psf + "d" + to_string(i));

    }
    
}


int32_t main()
{
    int n, m; cin>>n>>m;
    printMazePaths(0, 0, n - 1, m - 1, "");
    return 0;
}