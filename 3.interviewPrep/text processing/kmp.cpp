#include<bits/stdc++.h>
using namespace std;

void printPatternMatchingIndices(string str, string pat)
{
    string s = pat + "#" + str;
    int lps[s.size()] = {0};
    int i=1, len=0; 

    while(i < s.size())
    {
        if(s[i] == s[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len > 0)
            {
                len = lps[len - 1];
            }
            else
            {
                i++;
            }
        }
    }
    int pattersSize = pat.size();
    for(int i=pattersSize+1; i<s.size(); i++)
    {
        //cout<<lps[i]<<" ";
        if(lps[i] == pattersSize)
        {
            cout<<((i - (pattersSize+1)) - (pattersSize-1))<<"\n";
        }
    }
}

int main()
{
    string str, pattern;
    cin>>str>>pattern;
    printPatternMatchingIndices(str, pattern);
    return 0;
}