#include<bits/stdc++.h>
using namespace std;

int main ()
{
    unordered_map<int, int>hm;
    int size1, size2;
    cin>>size1>>size2;
    int list2[size2];
    //storing first list in hashmap hm
    for(int i=0; i<size1; i++)
    {
        int x; cin>>x;
        if(hm.find(x) == hm.end())
        {
            hm[x] = 1;
        }
        else
        {
            hm[x]++;
        }
    }
    //taking input for 2nd list
    for(int i=0; i<size2; i++)
    {
        cin>>list2[i];
    }
    //now matching which is odd element among elements of hashmap and list2
    for(int i=0; i<size2; i++)
    {
        if(hm.find(list2[i]) == hm.end())
        {
            cout<<list2[i]<<"\n";
            return 0;
        }
        else
        {
            hm[list2[i]] = -1;//if element is present, making that -1
        }
    }
    for(auto fs:hm)
    {
        if(hm[fs.second != -1])
        {
            cout<<fs.first<<"\n";
        }
    }
    return 0;
}