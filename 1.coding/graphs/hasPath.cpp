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

bool hasPath(vector<vector<Edge>>&graph, int src, int dest)
{
    if(src == dest)
    {
        return true;
    }
    
    for(Edge x: graph[src])
    {
        if(hasPath(graph, x.nbr, dest) == true)
        {
            return true;
        }
    }
    return false;

    // vector<Edge> :: iterator it;
    // for(it = graph[src].begin(); it!=graph[src].end(); it++)
    // {
    //     if(hasPath(graph, it->nbr, dest) == true)
    //     {
    //         return true;
    //     }
    // }
    // return false;
}

int32_t main()
{
    int vertices, edges;
    cin>>vertices>>edges;
    vector<vector<Edge>>graph(vertices);

    for(int i=0; i<edges; i++)
    {
        int src, nbr, wt;
        cin>>src>>nbr>>wt;
        
        Edge e1(src, nbr, wt);
        vector<Edge>x;
        x.push_back(e1);
        graph[src].push_back(x);

        Edge e2(nbr, src, wt);
        vector<Edge>xx; xx.push_back(e2);
        graph[nbr].push_back(xx);
    }
    int src, dest; cin>>src>>dest;

    if(hasPath(graph[vertices], src, dest) == true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
