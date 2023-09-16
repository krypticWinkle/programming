#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
    int src, nbr;

    Edge(int src, int nbr)
    {
        this->src = src;
        this->nbr = nbr;
    }
};

int perfectFriends(vector<Edge>*graph, int cur, bool *vis, int &a)
{
    vis[cur] = true;
    for(auto it: graph[cur])
    {
        if(vis[it.nbr] == 0)
        {
            a++;
            perfectFriends(graph, it.nbr, vis, a);
        }
    }
    return a;
}

vector<int> callForEachElement(vector<Edge>*graph, bool *vis, int ver)
{
    // cout<<graph->size();
    vector<int>x; int a=1;
    for(int i=0; i<ver; i++)
    {
        a=1;
        for(auto it: graph[i])
        {
            vis[it.src] = 1;
            if(vis[it.nbr] == 0)
            {
                a++;
                a = perfectFriends(graph, it.nbr, vis, a);
            }
        }
        if(a!=1)
        {
            x.push_back(a);
        }
    }
    return x;

}

int main()
{
    int vertices, edges;
    cin>>vertices>>edges;
    vector<Edge>graph[vertices];
    bool vis[vertices] = {0};

    for(int i=0; i<edges; i++)
    {
        int src, nbr;
        cin>>src>>nbr;

        Edge e1(src, nbr);
        Edge e2(nbr, src);

        graph[src].push_back(e1);
        graph[nbr].push_back(e2);
    }
    //cout<<graph->size();
    vector<int>x = callForEachElement(graph, vis, vertices);
    int total=0;

    //cout<<graph->size();


    for(int i=0; i<x.size(); i++)
    {
        //cout<<x[i]<<" ";
        for(int j=i+1; j<x.size(); j++)
        {
            total = total + x[i]*x[j];
        }
    }
    cout<<total;
    return 0;
}

/*
ip:
7
5
0 1
2 3
4 5
5 6
4 6

op: 16*/