#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2; int x;
    cin>>size1;

    unordered_map<int, int> hm, hm2;

    for(int i=0; i<size1; i++)
    {
        cin>>x;
        if(hm.find(x) == hm.end())
        {
            hm[x] = x;
        }
    }
    cin>>size2;
    for(int i=0; i<size2; i++)
    {
        cin>>x;
        if(hm2.find(x) == hm2.end())
        {
            hm2[x] = x;
            if(hm.find(x) == hm.end())
            {

            }
            else
            {
                cout<<x<<"\n";
            }
        }
    }
    return 0;
}