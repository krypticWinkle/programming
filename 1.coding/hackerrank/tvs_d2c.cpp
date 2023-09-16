#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    map<int, int>hm;
    if(n == 1){cout<<"1"; return 0;}
    hm[1] = 1; hm[2] = 2;
    for(int i=2; i<n; i++)
    {
        for(auto it: hm)
        {
            if(((i+1)%it.first) == 0 && (i+1 != it.first))
            {
                hm[i+1] = it.second + 1;
            }
        }
    }
    for(auto it: hm)
    {
        cout<<it.second<<" ";
    }
    return 0;
}