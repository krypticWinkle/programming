#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define ff first
#define ss second

class Edge
{
    public:
    int src, nbr, wt;

    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

void printPath(vector<Edge>*graph, int src, int dest, bool *visited, vector<int>paths)
{
    if(src == dest)
    {
        paths.push_back(dest);
        for(auto it: paths)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
    }

    visited[src] = true;

    paths.push_back(src);
    for(auto it: graph[src])
    {
        if(visited[it.nbr] == false)
        {
            printPath(graph, it.nbr, dest, visited, paths);
        }
    }
    visited[src] = false;
}

int32_t main()
{
    int vertices, edges;
    cin>>vertices>>edges;
    vector<Edge>graph[vertices];
    vector<int>paths;

    bool visited[vertices] = {0};


    // for(bool it: visited)
    // {
    //     cout<<it<<" ";
    // }


    for(int i=0; i<edges; i++)
    {
        int src, nbr, wt;
        cin>>src>>nbr>>wt;
        
        Edge e1(src, nbr, wt);
        graph[src].push_back(e1);

        Edge e2(nbr, src, wt);
        graph[nbr].push_back(e2);
    }

    int src, dest; 
    cin>>src>>dest;



    printPath(graph, src, dest, visited, paths);

    return 0;
}

/*
7
8
0 1 10
1 2 10
2 3 10
0 3 10
3 4 10
4 5 10
5 6 10
4 6 10
0
6

o/p: 
0 1 2 3 4 5 6
0 1 2 3 4 6
0 3 4 5 6
0 3 4 6*/