#include<bits/stdc++.h>
using namespace std;

void noOfIslands(vector<vector<int>>&graph, int r, int c, vector<vector<bool>>&vis)
{
    if(c>=graph[0].size() || r>=graph.size())
    {
        return;
    }
    if(graph[r][c] == 1)
    {
        vis[r][c] = true;
        return;
    }
    vis[r][c] = true;
    if(vis[r][c+1] == false)
    {
        noOfIslands(graph, r, c+1, vis);
    }
    if(vis[r+1][c] == false)
    {
        noOfIslands(graph, r+1, c, vis);
    }
    if(r-1 >=0 && vis[r-1][c] == false)
    {
        noOfIslands(graph, r-1, c, vis);
    }
    if(c-1>= 0 && vis[r][c-1] == false)
    {
        noOfIslands(graph, r, c-1, vis);
    }
}

int callForEachRow(vector<vector<int>>&graph, int r, int c, vector<vector<bool>>&vis)
{
    int count = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(vis[i][j] == false && graph[i][j]==0)
            {
                vis[i][j] = true;
                noOfIslands(graph, i, j, vis);
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int rows, col; 
    cin>>rows>>col;
    vector<vector<int>>graph;
    vector<vector<bool>>vis(100, vector<bool>(100, 0));//vector<vector<bool>>vis(rows, vector<bool>(col, 0));

    for(int i=0; i<rows; i++)
    {
        vector<int>x;
        for(int j=0; j<col; j++)
        {
            int a; cin>>a;
            x.push_back(a);
        }
        graph.push_back(x);
    }

    cout<<callForEachRow(graph, rows, col, vis);
    return 0;
}

/*
ip:
8
8
0 0 1 1 1 1 1 1
0 0 1 1 1 1 1 1
1 1 1 1 1 1 1 0
1 1 0 0 0 1 1 0
1 1 1 1 0 1 1 0
1 1 1 1 0 1 1 0
1 1 1 1 1 1 1 0
1 1 1 1 1 1 1 0

op: 3*/
