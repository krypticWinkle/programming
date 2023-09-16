#include<bits/stdc++.h>
using namespace std;

void removePrimes(vector<int>&v)
{
    for(int i=0; i< v.size(); i++)
    {
        if(v[i] != 2 && v[i] != 3 && v[i] != 1)
        {
            for(int j=2; j<=sqrt(v[i]); j++)// or we can also write: for(int j=2; j*j<=sqrtv[i]; j++)
            {
                if(v[i] % j == 0)
                {
                    break;
                }
                else if(sqrt(v[i]) - j < 1)
                {
                    v.erase(v.begin() + i);
                    i--;
                    break;
                }
            }
        }
        else
        {
            v.erase(v.begin() + i);
            i--;
        }
    }
    //return v;
}

int main()
{
    int size; cin>>size;
    vector<int> v;
    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    removePrimes(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    //cout<<sqrt(13);
    return 0;
}

/*
i/p: 3 12 13 15
o/p: 12 15
 */