#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ump unordered_map<int, int>
using namespace std;

/*
https://leetcode.com/problems/ransom-note/ E
https://leetcode.com/problems/design-twitter/ M
https://leetcode.com/problems/range-addition/ M
https://leetcode.com/problems/super-ugly-number/ M
https://leetcode.com/problems/jump-game-v/ H
https://leetcode.com/problems/sentence-similarity-iii/ M*/

bool isAlienSorted(vector<string>& words, string order)
{
    unordered_map<char, int>hm;
    for(int i=0; i<26; i++)
    {
        hm[order[i]] = i+1;
    }
    for(int i=1; i<words.size(); i++)
    {
        string s1 = words[i-1];
        string s2 = words[i];
        int len = min(s1.length(), s2.length());
        for(int j=0; j<len; j++)
        {
            if(hm[s1[j]] < hm[s2[j]])
            {
                break;
            }
            else if(hm[s1[j]] == hm[s2[j]])
            {
                if(j==len-1)
                {
                    if(s1.size() != len )
                        return false;
                }
                continue;
            }
            else//if (hm[s1[j]] > hm[s2[j]])
            {
                return false;
            }
            if(j==len-1)
            {
                if(s1.size() != len-1)
                    return false;
            }
        }
        
    }
    return true;
}


//LC 953
int32_t main()
{
    xx;
    int size; cin>>size;
    vi<string>words(size, "");
    rep(i, 0, size)
    {
        cin>>words[i];
    }
    string order; cin>>order;
    cout<<isAlienSorted(words, order)<<endl;
    return 0;
}

/*
Input: words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
Output: true
*/