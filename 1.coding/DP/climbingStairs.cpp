#include<bits/stdc++.h>
using namespace std;

int pathsCount(int total_stairs, int* prevSol)
{
    if(total_stairs == 0)
    {
        return 1;
    }
    if(prevSol[total_stairs] != 0)
    {
        return prevSol[total_stairs];
    }
    int total_paths1=0, total_paths2=0, total_paths3=0;
    if(total_stairs - 1 >= 0)
    {
        total_paths1 = pathsCount(total_stairs-1, prevSol);
    }
    if(total_stairs - 2 >= 0)
    {
        total_paths2 = pathsCount(total_stairs-2, prevSol);
    }
    if(total_stairs - 3 >= 0)
    {
        total_paths3 = pathsCount(total_stairs-3, prevSol);
    }

    prevSol[total_stairs] = total_paths1 + total_paths2 + total_paths3;
    return total_paths1 + total_paths2 + total_paths3;
}

int main()
{
    int total_stairs; cin>>total_stairs;
    int prevSol[total_stairs + 1] = {0};
    int ans = pathsCount(total_stairs, prevSol);
    cout<<ans;
    return 0;
}