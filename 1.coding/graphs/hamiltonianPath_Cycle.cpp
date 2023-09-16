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

void hamiltonian(vector<Edge>*graph, int src, unordered_set<int>&visit, string psf, int vertices, int origSrc)
{
    if(visit.size() == vertices -1)
    {
        cout<<psf;
        for(auto it: graph[src])
        {
            if(it.nbr == origSrc)
            {
                cout<<"*\n";
                return;
            }
        }
        cout<<".\n";
        return;
    }

    visit.insert(src);

    //paths.push_back(src);
    for(auto it: graph[src])
    {
        if(visit.find(it.nbr) == visit.end())
        {
            hamiltonian(graph, it.nbr, visit, psf + to_string(it.nbr), vertices, origSrc);
        }
    }
    visit.erase(src);
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
    int src; cin>>src;
    unordered_set <int> visit;

    hamiltonian(graph, src, visit, to_string(src), vertices, src);
    return 0;
}

/*
ip:
7
9
0 1 10
1 2 10
2 3 10
0 3 10
3 4 10
4 5 10
5 6 10
4 6 10
2 5 10
0

op:
0123456.
0123465.
0125643*
0346521*
*/
