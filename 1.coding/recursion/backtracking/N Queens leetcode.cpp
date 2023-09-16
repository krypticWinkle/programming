#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)
using namespace std;

//https://leetcode.com/problems/n-queens-ii/         ----suggestion after submitting N Queens solution
//https://leetcode.com/problems/grid-illumination/   ----suggestion after submitting N Queens solution

bool isSafe(vector<vector<string>>chess, int row, int col)
{
    for(int i=row-1; i>=0; i--)
    {
        if(chess[i][col] == "Q")
        {
            return false;
        }
    }
    int j=0;
    for(int i=row-1, j=col-1; (i>=0 && j>=0); i--, j--)
    {
        if(chess[i][j] == "Q")
        {
            return false;
        }
    }
    for(int i=row-1, j=col+1; (i>=0 && j<chess[0].size()); i--, j++)
    {
        if(chess[i][j] == "Q")
        {
            return false;
        }
    }
    return true;
}

/*vector<vector<string>>*/ 
void placeNQueens(vector<vector<string>>&chess, int row, vector<vector<string>>&ans)
{
    if(row == chess.size())
    {
        vector<string>x;
        for(int i=0; i<chess.size(); i++)
        {
            string str = "";
            for(int j=0; j<chess[0].size(); j++)
            {
                str += chess[i][j];
            }
            x.push_back(str);
        }
        ans.push_back(x);
    }
    for(int col=0; col<chess[0].size(); col++)
    {
        if(isSafe(chess, row, col))
        {
            chess[row][col] = "Q";
            placeNQueens(chess, row+1, ans);
            chess[row][col] = ".";
        }
    }    
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>>chess(n, vector<string>(n, "."));
    vector<vector<string>>ans;
    //for(int i=0; i<n; i++)
    //{
        placeNQueens(chess, 0, ans);
    //}
    return ans;
}

int32_t main()
{
    xx;
    int n; cin>>n;
    vector<vector<string>> ans = solveNQueens(n);

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[0].size(); j++)
        {
            cout<<ans[i][j]<<", ";
        }
        cout<<endl;
    }
    return 0;
}