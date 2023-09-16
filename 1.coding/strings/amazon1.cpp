#include<bits/stdc++.h>
using namespace std;

int distinctSubstrings(string str, int k)
{
    unordered_map<string, int>m;
    for(int i=0; i<str.size(); i++)
    {
        for(int j=1; j<=str.size()-i; j++)
        {
            m[str.substr(i, j)]++;
        }
    }

    unordered_map<string, int>:: iterator p;
    int maxi = 0;
	for (p = m.begin(); p != m.end(); p++)
    {
        if(p->first.size() == k)
        {
            maxi++;
         }
        //cout<<p->first<<" "<<p->second<<"\n";
    }
    return maxi;
}

int main()
{
    string str; int k;
    cin>>str>>k;
    cout<<distinctSubstrings(str, k);
    return 0;
}