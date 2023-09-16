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
    int counter = 0;
    for(int j=0; j<c1; j++)
    {
        if(j%2==0)
        {
            for(int i=0; i<r1; i++)
            {
                cout<<arr1[i][j]<<"\n";
            }
        }
        else
        {
            for(int i=r1-1; i>=0; i--)
            {
                cout<<arr1[i][j]<<"\n";
            }
        }
        counter++;
    }
    return 0;
}