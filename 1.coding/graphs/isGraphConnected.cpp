#include<bits/stdc++.h>
using namespace std;

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


void allConnectedComponents(vector<Edge>*graph, int cur, bool *vis)
{
    vis[cur] = true;
    for(auto it: graph[cur])
    {
        if(vis[it.nbr] == 0)
        {
            allConnectedComponents(graph, it.nbr, vis);
        }
    }    
}

int main()
{
    int vertices, edges;
    cin>>vertices>>edges;
    vector<Edge>graph[vertices];
    bool vis[vertices] = {0};
    
    for(int i=0; i<edges; i++)
    {
        int src, nbr, wt;
        cin>>src>>nbr>>wt;

        Edge e1(src, nbr, wt);
        Edge e2(nbr, src, wt);

        graph[src].push_back(e1);
        graph[nbr].push_back(e2);
    }

    
    allConnectedComponents(graph, 0, vis);

    for(int i=0; i<vertices; i++)
    {
        if(vis[i]==false)
        {
            cout<<"false\n";
            break;
        }

        if(i == vertices-1)
        {
            cout<<"true\n";
        }
    }


    return 0;
}

