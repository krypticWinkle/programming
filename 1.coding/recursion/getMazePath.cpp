#include<bits/stdc++.h>
using namespace std;

vector<string> allMazePaths(int src_row, int src_col, int dest_row, int dest_col)
{
    if(src_row == dest_row)
    {
        vector<string> x;
        string yz = "", temp = "h";
        int ab = dest_col - src_col;
        for(int i=0; i<ab; i++)
        {
            yz = yz + temp;
        }
        x.push_back(yz);
        return x;
    }
    if(src_col == dest_col)
    {
        vector<string> y;
        string yz = "", temp = "v";
        int cd = dest_row - src_row;
        for(int i=0; i<cd; i++)
        {
            yz = yz + temp;
        }
        y.push_back(yz);
        return y;
    }
    vector<string> path1 = allMazePaths(src_row, src_col+1, dest_row, dest_col);//moving 1 col
    vector<string> path2 = allMazePaths(src_row+1, src_col, dest_row, dest_col);//moving 1 row

    vector<string> finalPath;
    int size = path1.size();

    for(int i=0; i<size; i++)
    {
        finalPath.push_back("h" + path1[i]);
    }
    size = path2.size();
    for(int i=0; i<size; i++)
    {
        finalPath.push_back("v" + path2[i]);
    }

    return finalPath;
}

int main()
{
    int rows, columns;
    cin>>rows>>columns;

    vector<string> ans = allMazePaths(1, 1, rows, columns);
    cout<<"[";
    for(int i=0; i<ans.size()-1; i++)
    {
        cout<<ans.at(i)<<", ";
    }
    cout<<ans.at(ans.size()-1)<<"]";
    //char x='v';
    //cout<<7*x;
    return 0;
}