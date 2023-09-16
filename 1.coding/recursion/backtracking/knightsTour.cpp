#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define vii vector<int>
#define vis vector<string>
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)
using namespace std;

void display(vector<vii>& chess) 
{
    rep(i, 0, chess.size())
    {
        for (int j=0; j<chess.size(); j++) 
        {
            cout<<setw(3)<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    exit(0);//remove this if you want to print all the possible paths
}

void printKnightsTour(vector<vii>& chess, int n, int r, int c, int upcomingMove)
{
    if(r>=n || c>=n || r<0 || c<0 || chess[r][c]>0)//chess[r][c]>0: i.e. if that position is already filled
    {
        return;
    }
    //can't change the order of conditionals here. B/c ex: in 8x8 board, lets say r or c is goying beyond in 64th move. There
    //we'll get exception if we do so.
    else if(upcomingMove == n*n)
    {
        chess[r][c] = upcomingMove;
        display(chess);
        chess[r][c] = 0;
    }
    
    chess[r][c] = upcomingMove;
    printKnightsTour(chess, n, r-2, c+1, upcomingMove+1);
    printKnightsTour(chess, n, r-1, c+2, upcomingMove+1);
    printKnightsTour(chess, n, r+1, c+2, upcomingMove+1);
    printKnightsTour(chess, n, r+2, c+1, upcomingMove+1);

    printKnightsTour(chess, n, r+2, c-1, upcomingMove+1);
    printKnightsTour(chess, n, r+1, c-2, upcomingMove+1);
    printKnightsTour(chess, n, r-1, c-2, upcomingMove+1);
    printKnightsTour(chess, n, r-2, c-1, upcomingMove+1);
    chess[r][c] = 0;
}



int32_t main()
{
    int size; cout<<"Enter the dimension of your Chessboard:";cin>>size;
    //cout<<"Size of your chessboard is: "<<size<<"X"<<size<<endl;
    vector<vii>chess(size, vii (size, 0));
    cout<<"Where is your KNIGHT initially(Enter row and column): ";int row, col; cin>>row>>col;
    //cout<<"Location of your KNIGHT is: "<<row<<" "<<col<<"\n\n";
    printKnightsTour(chess, size, row, col, 1);
    
    return 0;
}