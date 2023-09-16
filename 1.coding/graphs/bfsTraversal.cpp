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

void bfs(vector<Edge>*graph, queue<pair<int, string>>q, int vertices)
{
    bool vis[vertices] = {0};
    while(q.size() > 0)
    {
        pair<int, string>rm = q.front();
        q.pop();//remove
        
        if(vis[rm.first] == true)
        {
            continue;
        }

        vis[rm.first] = true;//mark

        cout<<rm.first<<"@"<<rm.second<<"\n";//work

        for(auto it: graph[rm.first])//add
        {
            if(vis[it.nbr] == false)
            {
                q.push({it.nbr, rm.second+to_string(it.nbr)});
            }
        }
    }
}

int main()
{
    int vertices, edges;
    cin>>vertices>>edges;
    vector<Edge>graph[vertices];
    pair<int, string>pi;
    queue<pair<int, string>>q;

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
    q.push({src, to_string(src)});

    bfs(graph, q, vertices);
    return 0;
}

/*
ip:
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
2

op:
2@2
1@21
3@23
0@210
4@234
5@2345
6@2346*/