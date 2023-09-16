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

void print(vector<vector<int>>ans)
{
    int i=0;
    for(i=0; i<ans.size(); i++)
    {
        cout<<"[";int j=0;
        for(j=0; j<ans[i].size()-1; j++)
        {
            cout<<ans[i][j]<<", ";
        }
        if(j == ans[i].size()-1)
        {
            cout<<ans[i][j];
        }
        if(i == ans.size()-1)
        {
            cout<<"]";
        }
        else
        {
            cout<<"], ";
        }
    }
}

void allConnectedComponents(vector<Edge>*graph, int cur, bool *vis, vector<int>&x)
{
    vis[cur] = true;
    x.push_back(cur);  
    for(auto it: graph[cur])
    {
        if(vis[it.nbr] == false)
        {
            allConnectedComponents(graph, it.nbr, vis, x);
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

    vector<vector<int>>ans;
    for(int i=0; i<vertices; i++)
    {
        if(vis[i] == false)
        {
            vector<int>x;
            allConnectedComponents(graph, i, vis, x);
            ans.push_back(x);
        }
    }

    cout<<"[";
    print(ans);
    cout<<"]";

    return 0;
}