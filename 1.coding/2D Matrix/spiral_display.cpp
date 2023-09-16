#include<bits/stdc++.h>
using namespace std;

void printspiral(vector<vector<int>>&matrix)
{
    int minr=0, minc=0;
    int maxr = matrix.size()-1, maxc = matrix[0].size()-1;
    int cnt = 0, total_elem = (maxr+1)*(maxc+1);
    while(cnt < total_elem)
    {
        //left wall
        for(int i=minr; i<=maxr && cnt < total_elem; i++)
        {
            cout<<matrix[i][minc]<<"\n";
            cnt++;
        }
        minc++;
        //bottom wall
        for(int i=minc; i<=maxc && cnt < total_elem; i++)
        {
            cout<<matrix[maxr][i]<<"\n";//maxc
            cnt++;
        }
        maxr--;
        //right wall
        for(int i=maxr; i>=minr && cnt < total_elem; i--)
        {
            cout<<matrix[i][maxc]<<"\n";
            cnt++;
        }
        maxc--;
        //top wall
        for(int i=maxc; i>=minc && cnt < total_elem; i--)
        {
            cout<<matrix[minr][i]<<"\n";
            cnt++;
        }
        minr++;
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int r1, c1, x;//x is temporary variable
    cin>>r1>>c1;
    vector<vector<int>>matrix(r1, vector<int>(c1, 0));

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>x;
            matrix[i][j] = x;
        }
    }
    printspiral(matrix);
    // for(int i=0; i<r1; i++)
    // {
    //     for(int j=0; j<c1; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}