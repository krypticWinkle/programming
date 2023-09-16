#include<bits/stdc++.h>
using namespace std;

vector<string> allMazePaths(int src_row, int src_col, int dest_row, int dest_col)
{
    if(src_row == dest_row && src_col == dest_col)
    {
        vector<string> x;
        x.push_back("");
        
        return x;
    }
    vector<string> finalPath;

    //horizontal moves:
    for(int i=1; i<=dest_col - src_col; i++)
    {
        vector<string> path1 = allMazePaths(src_row, src_col+i, dest_row, dest_col);
        int size = path1.size();
        for(int j=0; j<size; j++)
        {
            string s = std::to_string(i);
            finalPath.push_back("h" + s + path1[j]);
        }
    }
    
    //vertical move
    for(int i=1; i<=dest_row - src_row; i++)
    {
        vector<string> path2 = allMazePaths(src_row+i, src_col, dest_row, dest_col);
        int size = path2.size();
        for(int j=0; j<size; j++)
        {
            string s = std::to_string(i);
            finalPath.push_back("v" + s + path2[j]);
        }
    }
    //diagonal move
    for(int i=1; i<=(dest_row-src_row) && i<=(dest_col-src_col); i++)
    {
        vector<string> path3 = allMazePaths(src_row+i, src_col+i, dest_row, dest_col);
        int size = path3.size();
        for(int j=0; j<size; j++)
        {
            string s = std::to_string(i);
            finalPath.push_back("d" + s + path3[j]);
        }
    }

    return finalPath;
}

int main()
{
    int rows, columns;
    cin>>rows>>columns;
    if(rows == 0 || columns == 0)
    {
        cout<<"[]";
        return 0;
    }

    vector<string> ans = allMazePaths(1, 1, rows, columns);
    cout<<"[";
    for(int i=0; i<ans.size()-1; i++)
    {
        cout<<ans.at(i)<<", ";
    }
    cout<<ans.at(ans.size()-1)<<"]";

    return 0;
}

/*
i/p: 2 2
o/p: [h1v1, v1h1, d1]*/