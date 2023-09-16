#include<bits/stdc++.h>
using namespace std;

void floodfill(vector<vector<int>>a, int r, int c, int dr, int dc, string route, bool *vis)
{
    if(r == dr && c == dc)
    {
        cout<<route<<"\n";
        return;
    }
    if(r<0 || r>dr || c<0 || c>dc || a[r][c]==1 || *((vis +(a.size() * r)) + c) == true)
    {
        return;
    }
    *((vis + r*(dr+1)) + c) = true;
    floodfill(a, r-1,  c, dr, dc, route+"t", (bool *)vis);
    floodfill(a, r,  c-1, dr, dc, route+"l", (bool *)vis);
    floodfill(a, r+1,  c, dr, dc, route+"d", (bool *)vis);
    floodfill(a, r,  c+1, dr, dc, route+"r", (bool *)vis);

    *((vis + r*(dr+1)) + c) = false;
}

int main()
{
    int rows, col;
    cin>>rows>>col;

    vector<vector<int>>arr(rows, vector<int>(col));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    bool vis[rows][col];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
            vis[i][j] = false;
        }
    }
    floodfill(arr, 0, 0, rows-1, col-1, "", (bool *)vis);
    
    return 0;
}