#include<bits/stdc++.h>
using namespace std;
#define long long int

int countt = 0;
void mazeRun(vector<vector<int>>v, int r, int c, string psf, bool* vis)
{
    if(r<0 || c<0 || r == v.size() || c == v.size() || v[r][c] == 0 ||*((vis +(v.size() * r)) + c) == true)
        return;
    if(r==v.size()-1 && c ==v.size()-1)
    {
        countt++;
        return;
    }
    *((vis +(v.size() * r)) + c) = true;
    mazeRun(v,r, c+1, psf + "t", vis);
    mazeRun(v,r+1, c, psf + "t", vis);

    *((vis +(v.size() * r)) + c) = false;    
}

int32_t main()
{

    int N; cin>>N;
    string S[N];
    
    for(int i=0; i<N; i++)
    {
        cin>>S[i];
    }
    

    vector<vector<int>>v;
    for(int i=0; i<N; i++)
    {
        vector<int>vv;
        for(int j=0; j<N; j++)
        { 
            int x; x = S[i][j] - 48;//cin>>x;
            vv.push_back(x);
        }
            v.push_back(vv);
    }
    bool vis[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            vis[i][j] = false;
        }
    }
    mazeRun(v, 0, 0, "", (bool *)vis);

    if(countt != 0)
    {
        cout<<countt;
    }
    else
    {
        cout<<"-1";
    }

    return 0;
}