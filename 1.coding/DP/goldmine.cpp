#include<bits/stdc++.h>
using namespace std;

int maxGoldDug(vector<vector<int>>&goldDeposits, int curRow, int curCol, vector<vector<int>>&prevSol)
{
    if(curCol == goldDeposits[0].size() - 1)
    {
        return goldDeposits[curRow][curCol];
    }
    //Memoization
    if(prevSol[curRow][curCol] != -1)
    {
        return prevSol[curRow][curCol];
    }

        int ans = 0;
        int profit1 = 0, profit2 = 0, profit3 = 0;
        if(curRow > 0 && curCol < goldDeposits[0].size() - 1)
        {
            profit1 = maxGoldDug(goldDeposits, curRow-1, curCol+1, prevSol);
        }//diagonally up
        if(curCol < goldDeposits[0].size() - 1)
        {
            profit2 = maxGoldDug(goldDeposits, curRow, curCol+1, prevSol);
        }//horizontal
        if(curCol < goldDeposits[0].size() - 1 && curRow < goldDeposits.size() - 1)
        {
            profit3 = maxGoldDug(goldDeposits, curRow+1, curCol+1, prevSol);
        }//diagonally down

        int maxProfit = max(profit1, max(profit2, profit3));
        ans = goldDeposits[curRow][curCol] + maxProfit;
        prevSol[curRow][curCol] = ans;

        return ans;

}

int callForEachRow(vector<vector<int>>&goldDeposits, int curRow, int curCol, vector<vector<int>>&prevSol)
{
    int maxi = 0;
    for(int i=0; i<goldDeposits.size(); i++)
    {
        int a = maxGoldDug(goldDeposits, i, 0, prevSol);
        if(a > maxi)
        {
            maxi = a;
        }
    }
    return maxi;
}

int main ()
{
    int rows, columns;
    cin>>rows>>columns;
    vector<vector<int>>goldDeposits, prevSol;
    for(int i=0; i<rows; i++)
    {
        vector<int>temp;
        for(int j=0; j<columns; j++)
        {
            int x; cin>>x;
            temp.push_back(x);
        }
        goldDeposits.push_back(temp);
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

    cout<<callForEachRow(goldDeposits, 0, 0, prevSol);
    
    return 0;
}

/*
i/p:
6 6
0 1 4 2 8 2
4 3 6 5 0 4
1 2 4 1 4 6
2 0 7 3 2 2
3 1 5 9 2 4
2 7 0 8 5 1

o/p: 33*/