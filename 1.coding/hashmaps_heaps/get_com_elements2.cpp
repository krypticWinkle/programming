#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size1, size2; int x;
    cin>>size1;

    unordered_map<int, int> hm;

    for(int i=0; i<size1; i++)
    {
        cin>>x;
        if(hm.find(x) == hm.end())
        {
            hm[x] = 1;
        }
        else
        {
            hm[x]++;
        }
    }
    cin>>size2;
    for(int i=0; i<size2; i++)
    {
        cin>>x;
        if(hm.find(x) == hm.end() || hm[x] == 0)
        {
            
        }
        else
        {
            cout<<x<<"\n";
            hm[x]--;
        }
    }
    //neeche ye galat logic hai jo 1st time try kiya tha
    // for(auto it : hm2)
    // {
    //     if(hm.find(it.first) == hm.end())
    //     {

    //     }
    //     else
    //     {
    //         if(hm[it.first] > it.second)
    //         {
    //             for(int i=0; i<it.second; i++)
    //             {
    //                 cout<<it.first<<"\n";
    //             }
    //         }
    //         else
    //         {
    //             for(int i=0; i<hm[it.first]; i++)
    //             {
    //                 cout<<it.first<<"\n";
    //             }
    //         }
    //     }
    // }
    return 0;
}