#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> hm;
    hm["india"] = (135);
    hm["china"] = (200);
    hm["usa"] = (20);
    hm["brazil"] = (50);
    hm["pakistan"] = (40);

    hm.insert({"kenya", 8.8});

    hm["india"] = (50);

    if(hm.find("uruguay") == hm.end())
    {
        cout<<"Not Found"<<"\n";
    }

    cout<<hm["india"];

    for(auto it : hm)
    {
        cout<<it.first<<" "<<it.second<<"\n";
        //if you want to print only keys, do only first
    }
    return 0;
}