#include<bits/stdc++.h>
using namespace std;

//#define rep(i,a,b) for(int i=a; i<b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define ff first
#define ss second

const int N = 1e5+2, MOD = 1e9+7;


//Graph Representation by adjacency matrix
int main()
{
    int numNodes, edges;
    //cin>>numNodes>>edges;

    // vector<vector<int>>adjm(numNodes+1, vector<int>(numNodes+1, 0));
    // for(int i=0; i<edges; i++)
    // {
    //     int x, y; cin>>x>>y;
    //     adjm[x][y] = 1;
    //     adjm[y][x] = 1;
    // }
    // for(int i=1; i<numNodes+1; i++)
    // {
    //     for(int j=1; j<numNodes+1; j++)
    //     {
    //         cout<<adjm[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }


    vi adj[1000];
    cin>>numNodes>>edges;
    
    for(int i=0; i<edges; i++)
    {
        int x, y;
        cin >>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=1; i<numNodes+1; i++)
    {
        cout<<i<<" -> ";
        for(int x: adj[i])
        {
            cout<<x<<" ";
        }
        cout<<"\n";
        //for C++ 11
        // vector <int> ::iterator it;
        //for(it = adj[i].begin(); it!=adj[i].end(); it++)
        // {
        //     cout<<*it<<" ";
        // }
    }
    return 0;
}
/*
i/p:
7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3
o/p:
1 -> 2 3
2 -> 1 4 5 6 7
3 -> 1 7
4 -> 2
5 -> 2
6 -> 2
7 -> 2 3*/