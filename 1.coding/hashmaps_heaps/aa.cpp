#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unordered_map<char, int> hm;
    string s; cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        if(hm.find(ch) == hm.end())
        {
            hm[ch] = 1;
        }
        else
        {
            hm[ch]++;
        }
    }

    int max_val = 0;
    char max_occur = s[0];
    for(auto it : hm)
    {
        if(it.second > max_val)
        {
            max_val = it.second;
            max_occur = it.first;
        }
    }
    cout<<max_occur;
    return 0;
}