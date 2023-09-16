#include<bits/stdc++.h>
using namespace std;
const int D = 8;

bool canPlace(int board[D][D], int n, int r, int c)
{
    return
    r >= 0 && r < n &&
    c >= 0 && c < n &&
    board[r][c] == 0;
}
//move_no means kitne move chal chuka hoon
bool solveKnightMove(int board[D][D], int n, int move_no, int curRow, int curCol) //n is the dimension of the board
{
    if(move_no == n*n)
    {
        return true;
    }
    int rowDir[] = {+2, +1, -1, -2, -2, -1, +1, +2};
    int colDir[] = {+1, +2, +2, +1, -1, -2, -2, -1};
    for(int curDir = 0; curDir<8; curDir++)
    {
        int nextRow = curRow + rowDir[curDir];
        int nextCol = curCol + colDir[curDir];
        if(canPlace(board, n, nextRow, nextCol) == true)
        {
            //placing the knight there
            board[nextRow][nextCol] = move_no + 1;//place the knight
            bool isSuccessful = solveKnightMove(board, n, move_no + 1, nextRow, nextCol);
            if(isSuccessful == true)
            {
                return true;
            }

            else
            {
                board[nextRow][nextCol] = 0;//erasing the knight
            }
        }
    }
    return false;
}

void printBoard(int board[D][D], int n)
{
    for(int i = 0; i<n;i++)
    {
        for(int j = 0; j<n;j++)
        {
            cout<<setw(5)<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main ()
{
    int board[D][D] = {0};
    board[0][0] = 1; // (0, 0) pe knight ko rakh diya
    int n;// n is the dimension of the chess board
    cin>>n;
    //board, dimension, move done, curr positions. Ye sab function ko diya
    bool ans = solveKnightMove(board, n, 1, 0, 0);

    if(ans == true)
    {
        printBoard(board, n);

    }
    else
    {
        cout<<"Sorry";
    }
    return 0;
}