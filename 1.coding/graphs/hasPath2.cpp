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

bool hasPath(vector<Edge>*graph, int src, int dest, bool *visited)
{
    if(src == dest)
    {
        return true;
    }
    visited[src] = true;
    for(Edge x: graph[src])
    {
        if(visited[x.nbr]==false)
        {
            if(hasPath(graph, x.nbr, dest, visited) == true)
            {
                return true;
            }
        }    
    }
    return false;

    // Edge :: iterator it;
    // for(Edge it = graph[src].begin(); it!=graph[src].end(); it++)
    // {
    //     if(hasPath(graph, it.nbr, dest) == true)
    //     {
    //         return true;
    //     }
    // }
    // return false;


    // for(int i=0; i<graph[src].size(); i++)
    // {
    //     if(hasPath(graph, graph[src][i].nbr, dest) == true)
    //     {
    //         return true;
    //     }
    // }

    // for(int i=0; i<vertices; i++)
    // {
    //     for(int j=0; j<graph[i].size(); j++)
    //     {
    //         cout<<"{"<<graph[i][j].src<<" "<<graph[i][j].nbr<<" "<<graph[i][j].wt<<"} ";
    //     }
    //     cout<<endl;
    // }


}

int32_t main()
{
    int vertices, edges;
    cin>>vertices>>edges;
    vector<Edge>graph[vertices];

    bool visited[vertices] = {0};


    for(int i=0; i<edges; i++)
    {
        int src, nbr, wt;
        cin>>src>>nbr>>wt;
        
        Edge e1(src, nbr, wt);
        graph[src].push_back(e1);

        Edge e2(nbr, src, wt);
        graph[nbr].push_back(e2);
    }
    // for(int i=0; i<vertices; i++)
    // {
    //     for(int j=0; j<graph[i].size(); j++)
    //     {
    //         cout<<"{"<<graph[i][j].src<<" "<<graph[i][j].nbr<<" "<<graph[i][j].wt<<"} ";
    //     }
    //     cout<<endl;
    // }
    int src, dest; 
    cin>>src>>dest;



    if(hasPath(graph, src, dest, visited) == true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
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

o/p: true*/