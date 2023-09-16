#include<bits/stdc++.h>
using namespace std;

vector<int> indicesOfAnagrams(string s, string p)
{
    unordered_map<char, int>p_hm, s_hm;
    vector<int>ans; int j=0;
    for(int i=0; i<p.size(); i++){ p_hm[p[i]]++;}// p ka characters in hashmap
    for(j=0; j<p.size()-1; j++){s_hm[s[j]]++;}//storing the chars of s up till p's size
    int i=0;
    for(int k=j; k<s.size(); k++)
    {
        s_hm[s[k]]++;
        if(p_hm == s_hm)
        {
            ans.push_back(i);
        }
        if(s_hm[s[i]] == 1)//removing the char at 'i' bcz we'll put next char from next window
        {
            s_hm.erase(s[i]);
        }
        else
        {
            s_hm[s[i]]--;
        }
        i++;
    }
    return ans;
}

int main()
{
    string s, p;
    cin>>s>>p;
    vector<int>ans = indicesOfAnagrams(s, p);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}