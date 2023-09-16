#include<bits/stdc++.h>
using namespace std;

static string spath;
static int spathwt = INT_MAX;
static string lpath;
static int lpathwt = INT_MIN;
static string jgtpath;
static int jgtpwt = INT_MAX;
static string jltpath;
static int jltpathwt = INT_MIN;
static vector<pair<int, string>>pq;

bool cmp(pair<int, string>a, pair<int, string>b)
{
    return a.first > b.first;
}

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

void diffPaths(vector<Edge>*graph, int src, int dest, bool *visited, int criteria, int k, string psf, int wsf)
{
    if(src == dest)
    {
        if(wsf < spathwt)
        {
            spathwt = wsf;
            spath = psf;
        }
        if(wsf > lpathwt)
        {
            lpathwt = wsf;
            lpath = psf;
        }
        if(wsf > criteria && wsf < jgtpwt)
        {
            jgtpwt = wsf;
            jgtpath = psf;
        }
        if(wsf < criteria && wsf > jltpathwt)
        {
            jltpathwt = wsf;
            jltpath = psf;
        }
        if(pq.size() < k)//kth largest path
        {
            pq.push_back({wsf, psf});
            sort(pq.begin(), pq.end(), cmp);
        }
        else
        {
            if(wsf > pq[pq.size()-1].first)
            {
                pq.pop_back();
                pq.push_back({wsf, psf});
                sort(pq.begin(), pq.end(), cmp);
            }
        }
        return;
    }

    visited[src] = true;
    for(auto it: graph[src])
    {
        if(visited[it.nbr] == false)
        {
            diffPaths(graph, it.nbr, dest, visited, criteria, k, psf + to_string(it.nbr), wsf+it.wt);
        }
    }
    visited[src] = false;
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

    int src, dest, criteria, k;//criteria is wt. We've to find path (> or <) that
    cin>>src>>dest>>criteria>>k;


    diffPaths(graph, src, dest, visited, criteria, k, to_string(src), 0);

    cout<<"Smallest Path = "<<spath<<"@"<<spathwt<<"\n";
    cout<<"Largest Path = "<<lpath<<"@"<<lpathwt<<"\n";
    cout<<"Just Larger Path than "<<criteria<<" = "<<jgtpath<<"@"<<jgtpwt<<"\n";
    cout<<"Just Smaller Path than "<<criteria<<" = "<<jltpath<<"@"<<jltpathwt<<"\n";
    cout<<k<<"th largest path = "<<pq[pq.size()-1].second<<"@"<<pq[pq.size()-1].first<<"\n";

    return 0;
}

/*
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
6
30
4



o/p: 
Smallest Path = 01256@28
Largest Path = 032546@66
Just Larger Path than 30 = 012546@36
Just Smaller Path than 30 = 01256@28
4th largest path = 03456@48*/