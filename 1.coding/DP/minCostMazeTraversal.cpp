#include<bits/stdc++.h>
using namespace std;

//Also, look into how to pass a 2D array matrix to a function
//This is Leetcode 64 (submitted only on pepcoding)
int leastCost(vector<vector<int>>&mazeCost, int curr_row, int curr_col, int destRow, int destCol, vector<vector<int>>&prevSol)
{
    if(curr_row == destRow-1 && curr_col == destCol-1)
    {
        return mazeCost[curr_row][curr_col];
    }
    //Memoization
    if(prevSol[curr_row][curr_col] != -1)
    {
        return prevSol[curr_row][curr_col];
    }

    int pathCost1=INT_MAX;
    if(curr_row < destRow-1)//traversing row
    {
        pathCost1 = leastCost(mazeCost, curr_row+1, curr_col, destRow, destCol, prevSol);
    }
    // a[2][3] //5*6
    // *(a + 2*6 + 3)
    // [1,2,3,4,5]
    // [6,7,8,9,10]
    // [11,12,13,14,15]


    // 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15

    // .......................................................................
    int pathCost2=INT_MAX;
    if(curr_col < destCol-1)//traversing column
    {
        pathCost2 = leastCost(mazeCost, curr_row, curr_col+1, destRow, destCol, prevSol);
    }

    int ans = mazeCost[curr_row][curr_col] + min(pathCost1, pathCost2);
    prevSol[curr_row][curr_col] = ans;

    return ans;
}

int main()
{
    int rows, columns;
    cin>>rows>>columns;
    vector<vector<int>> mazeCost;
    vector<vector<int>> prevSol;
    for(int i=0; i<rows; i++)
    {
        vector<int>temp;
        for(int j=0; j<columns; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        mazeCost.push_back(temp);
    }

    //Initializing the memoization vector by -1.
    for(int i=0; i<rows; i++)
    {
        vector<int>temp;
        for(int j=0; j<columns; j++)
        {
            temp.push_back(-1);
        }
        prevSol.push_back(temp);
    }

    cout<<leastCost(mazeCost, 0, 0, rows, columns, prevSol);
    return 0;
}

/*i/p:
2 2
5 4
3 1

o/p: 9 (the path is 5->3->1)*/