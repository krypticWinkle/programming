#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)
using namespace std;


bool isSafe(vector<vi>chess, int row, int col)
{
    for(int i=row-1; i>=0; i--)
    {
        if(chess[i][col] == 1)
        {
            return false;
        }
    }
    int j;
    for(int i=row-1, j=col-1; (i>=0 && j>=0); i--, j--)
    {
        if(chess[i][j] == 1)
        {
            return false;
        }
    }
    for(int i=row-1, j=col+1; (i>=0 && j<chess[0].size()); i--, j++)
    {
        if(chess[i][j] == 1)
        {
            return false;
        }
    }
    return true;
}

void printNQueens(vector<vi> chess, string qsf, int row)
{
    if(row == chess.size())
    {
        cout<<qsf<<"."<<endl;
        return;
    }
    for(int col=0; col<chess[0].size(); col++)
    {  
        if(isSafe(chess, row, col))
        {
            chess[row][col] = 1;
            printNQueens(chess, qsf + to_string(row) + "-" + to_string(col)+", ", row+1);
            chess[row][col] = 0;
        }
    }
}

int32_t main() 
{
    int n;
    cin >> n;
    vector<vi>chess(n, vi (n));

    printNQueens(chess, "", 0);
    //vector<string> ans = solveNQueens(n);

    return 0;
}