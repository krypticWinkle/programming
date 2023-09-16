#include<bits/stdc++.h>

//#include<unordered_map>
using namespace std;

int main()
{
    //key -> integer, value -> float
    map<int, float> mp;
    mp[2] = 3.0;
    mp[1] = 4.2;
    mp[6] = 7.8;
    mp.insert({4, 8.8});

    unordered_map<int, int>ump;
    ump[2] = 3;
    ump[8] = 7;
    ump[3] = 15;

    if(ump.find(7) == ump.end())
    {
        cout<<"Not Found"<<"\n";
    }
    else
    {
        cout<<"Found"<<"\n";
    }
    for(auto it = mp.begin(); it!= mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
    }
    return 0;
}