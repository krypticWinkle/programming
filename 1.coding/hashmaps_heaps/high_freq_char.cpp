#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<char, int> hm;

    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        if(hm.find(ch) == hm.end())
        {
            hm[ch] = 1;
        }
        else
        {
            hm[ch] += 1;
            
        }
    }

    int max = hm[s[0]];char max_char;
    for(auto it: hm)
    {
        if(it.second > max)
        {
            max = it.second;
            max_char = it.first;
        }
    }
    cout<<max_char;
    return 0;
}