#include<bits/stdc++.h>
using namespace std;

/*GFG: Length of smallest substring of a given string which contains another string as subsequence*/
int minSubsequenceLength(string s1, string s2)
{
    unordered_map<char, vector<int>>hm;
    for(int i=0; i<s2.length(); i++)
    {
        for(int j=0; j<s1.length(); j++)//bcefababcdf
        {
            if(s2[i] == s1[j])
            {
                hm[s2[i]].push_back(j);
            }
        }
    }
    for(int i=0; i<s2.length(); i++)
    {
        
    }
    
}

int main()
{
    string s1; cin>>s1;
    string s2 = "abf";
    cout<<minSubsequenceLength(s1, s2);
    return 0;
}

/*
for(auto it: hm)
    {    
        cout<<it.first<<": ";
        for(int j=0; j< it.second.size(); j++)
        {
            cout<<it.second[j]<<" ";
        }
        cout<<"\n";
    }
*/