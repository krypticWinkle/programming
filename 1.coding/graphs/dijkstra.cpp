#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
    int src, nbr, wt;
    public:
    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

class Pair
{
    public:
    int v, wsf; string psf;
    public:
    Pair(int v, string psf, int wsf)
    {
        this->v = v;
        this->psf = psf;
        this->wsf = wsf;
    }
};
class comp
{
    public:
    bool operator()(const Pair &a, const Pair &b)
	{
		return a.wsf < b.wsf;
	}
};


int main()
{
    int vertices, edges;
    cin>>vertices>>edges;
    vector<Edge>graph[vertices];

    for(int i=0; i<edges; i++)
    {
        int src, nbr, wt;
        cin>>src>>nbr>>wt;

        Edge e1(src, nbr, wt);
        graph[src].push_back(e1);

        Edge e2(nbr, src, wt);
        graph[nbr].push_back(e2);
        
    }
    
    int src; cin>>src;

    priority_queue<Pair, vector<Pair>, comp>pq;
    pq.push({src, to_string(src), 0});
    bool vis[vertices] = {0};

    while(pq.size() > 0)
    {
        Pair removed = pq.top();
        pq.pop();

        if(vis[removed.v] == true)
        {
            continue;
        }
        vis[removed.v] == true;
        cout<<removed.v<<" via "<<removed.psf<<" @ "<<removed.wsf<<"\n";

        for(auto it: graph[removed.v])
        {
            if(vis[it.nbr] == false)
            {
                pq.push({it.nbr, removed.psf+to_string(it.src), removed.wsf + it.wt});
            }
        }

    }
    return 0;
}

/*
ip:
7
9
0 1 10
1 2 10
2 3 10
0 3 40
3 4 2
4 5 3
5 6 3
4 6 8
2 5 5
0

op:
0 via 0 @ 0
1 via 01 @ 10
2 via 012 @ 20
5 via 0125 @ 25
4 via 01254 @ 28
6 via 01256 @ 28
3 via 012543 @ 30*/
