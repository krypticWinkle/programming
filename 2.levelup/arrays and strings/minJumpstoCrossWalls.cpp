#include<bits/stdc++.h>
using namespace std;

int minJumps(int *a, int size, int x, int y)
{
    int ans=0;
    for(int i=0; i<size; i++)
    {
        while(a[i] > 0)
        {
            a[i] -= x;
            if(a[i] > 0)
                a[i] += y;
            ans++;
        }
    }
    return ans;
    

}

int main()
{
    int size; cin>>size;
    int wallsSize[size];
    for(int i=0; i<size; i++)
        cin>>wallsSize[i];
    int x, y; cin>>x>>y;
    cout<<minJumps(wallsSize, size, x, y);
    return 0;
}