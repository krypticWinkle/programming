#include<bits/stdc++.h>
using namespace std;

vector<string> possibleStairPaths(int total_stairs)
{
    if(total_stairs == 0)
    {
        vector<string> x;
        x.push_back("");
        return x;
    }
    else if(total_stairs < 0)
    {
        vector<string> x;
        return x;
    }
    vector<string> path1 = possibleStairPaths(total_stairs-1);
    vector<string> path2 = possibleStairPaths(total_stairs-2);
    vector<string> path3 = possibleStairPaths(total_stairs-3);

    vector<string> path;
    int s = path1.size();
    for(int i=0; i<s; i++)
    {
        path.push_back("1" + path1[i]);
    }
    s = path2.size();
    for(int i=0; i<s; i++)
    {
        path.push_back("2" + path2[i]);
    }
    s = path3.size();
    for(int i=0; i<s; i++)
    {
        path.push_back("3" + path3[i]);
    }

    return path;
}

int main()
{
    int total_stairs; cin>>total_stairs;

    vector<string>ans = possibleStairPaths(total_stairs);
    cout<<"[";
    for(int i=0; i<ans.size()-1; i++)
    {
        cout<<ans[i]<<", ";
    }
    cout<<ans[ans.size()-1]<<"]";
    return 0;
}