#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size, x;
    cin>>size;

    map<int, bool> hm;

    for(int i=0; i<size; i++)
    {
        cin>>x;
        hm[x] = true;
    }
    for(auto it: hm)
    {
        if(hm.find(it.first-1) == hm.end())
        {

        }
        else
        {
            hm[it.first] = false;
        }
    }

    int max_start_point = 0;
    int max_len = 0;

    for(auto it: hm)
    {
        if(it.second == true)
        {
                
                int temp_len = 1;
                int temp_start_point = it.first;

                while(hm.find(temp_start_point + temp_len) != hm.end())
                {
                    temp_len++;
                }

                if(temp_len > max_len)
                {
                    max_start_point = temp_start_point;
                    max_len = temp_len;
                }
            
        }
    }

    for(int i=0; i<max_len; i++)
    {
        cout<<max_start_point + i<<"\n";
    }
    // for(auto it : hm)
    // {
    //     cout<<it.first<<" "<<it.second<<"\n";
    // }

    return 0;
}