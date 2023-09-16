#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

void popularity(vector<string>&urls, int size)
{
    unordered_map<string, int>hm;
    for(int i=0; i<size; i++)
    {
        if(hm.find(urls[i]) == hm.end())
        {
            hm[urls[i]] = 1;
        }
        else
        {
            hm[urls[i]]++;
        }
    }
    vector<pair<string, int>>p; int uniqueURLS = 0;
    for(auto it:hm)
    {
        string x = it.first;
        int y = it.second;
        p.push_back({x, y});
        uniqueURLS++;
    }
    cout<<uniqueURLS<<"\n";

    sort(p.begin(), p.end(), comp);

    for(int i=0; i<p.size(); i++)
    {
        cout<<p[i].first<<" ";
    }
    

}

int main()
{
    int size; cin>>size;
    vector<string>urls;

    for(int i=0; i<size; i++)
    {
        string x; cin>>x;
        urls.push_back(x);
    }

    popularity(urls, size);

    return 0;
}
/*
i/p:
6
abc bca bcg bcd abc erg
o/p:
5
abc bca bcd bcg erg*/