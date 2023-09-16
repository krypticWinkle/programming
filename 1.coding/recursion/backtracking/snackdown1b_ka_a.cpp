#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define ump unordered_map<int, int>
#define rep(i, a, b) for(int i=a; i<b; i++)
using namespace std;

//https://www.codechef.com/SNCK1B21/submit/QPLACE

int32_t main()
{
    xx;
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<vector<char>>ans(n, vector<char>(n, '.'));
        int i=0;
        if(n==1)
            {cout<<"Q"<<endl; continue;}
        else if(n==2)
            {cout<<"Q.\n.."<<endl;continue;}
        while(n-i > 3)
        {
            ans[i][i] = 'Q'; i++;
        }
        ans[n-2][n-2] = 'Q';
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<ans[i][j];
            }
            cout<<endl;
        }
        // for(int i=1; i<=n; i++)
        // {
        //     for(int j=1; j<=n; j++)
        //     {
        //         if(i==j)
        //         {
        //             cout<<"Q";
        //         }
        //         else
        //         {
        //             cout<<".";
        //         }
        //     }
        //     cout<<endl;
        //     if(n-i == 3)
        //         break;
        // }
    }
    return 0;
}

/*
Q...



*/