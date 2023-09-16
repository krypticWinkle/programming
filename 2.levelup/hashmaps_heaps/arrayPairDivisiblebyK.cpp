#include<bits/stdc++.h>
#define int long long
#define vi vector<int>
#define endl "\n"
using namespace std;

bool canArrange(vector<int>&a, int k) 
{
   unordered_map<int, int> hm;
    for(int i=0; i<a.size(); i++)
    {
        int rem = a[i]%k;
        if(rem < 0)
        {
            rem += k;
        }
        hm[rem]++;
        // if(a[i] < 0)
        // {
        //     int rem = (a[i]%k) + k;
        //     hm[rem]++;
        // }
        // else
        // {
        //     hm[a[i]%k]++;
        // }
    }
    for(auto it: hm)
    {
        if(hm.find(k-it.first) != hm.end() || it.first == 0)
        {
            if((it.first == k-it.first || it.first == 0) && (it.second % 2 == 0))
            {
                continue;
            }
            else if(it.second == hm[k-it.first])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        else
            return false;
    }
    return true;
}

int32_t main()
{
    int size; cin>>size;
    vi v(size, 0);
    for(int i=0; i<size; i++)
    {
        int x; cin>>x;
        v[i] = x;
    }
    int k; cin>>k;
    
    if(canArrange(v, k))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;


    return 0;
}

