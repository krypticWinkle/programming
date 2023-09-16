#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r1, c1, x;//x is temporary variable
    cin>>r1>>c1;
    int arr1[r1][c1];

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>x;
            arr1[i][j] = x;
        }
    }
    int r2, c2;
    cin>>r2>>c2;
    int arr2[r2][c2];

    if(c1 != r2)
    {
        cout<<"Invalid input";
        //return -1;
    }
    else
    {
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cin>>x;
                arr2[i][j] = x;
            }
        }
        int ans[r1][c2];
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                ans[i][j]=0;
            }
        }
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                for(int k=0;k<c1; k++)
                {
                    ans[i][j] += (arr1[i][k] * arr2[k][j]);
                }
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    // for(int i=0; i<r1; i++)
    // {
    //     for(int j=0; j<c2; j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    return 0;
}