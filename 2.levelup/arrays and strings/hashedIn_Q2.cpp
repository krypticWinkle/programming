#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>T, vector<int>A)
{
    int x=0; //= A.size();
    unordered_map<int, bool>hm;
    // for(int i=0; i<A.size(); i++)
    // {
    //     hm[A[i]] = true;
    // }
    for(int i=0; i<A.size(); i++)
    {
        if(T[A[i]] != 0)
        {
            A.push_back(T[A[i]]);
            x++;
        }
        else
        {
            if(hm[A[i]] == true)
            {
                
            }
        }
    }
}

int main()
{
    int size1, size2;
    cin>>size1>>size2;
    vector<int>T, A;

    for(int i=0; i<size1; i++)
    {
        int x; cin>>x;
        T.push_back(x);
    }
    for(int i=0; i<size2; i++)
    {
        int x; cin>>x;
        A.push_back(x);
    }
    solve(T, A);
}