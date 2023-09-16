#include<bits/stdc++.h>
using namespace std;

vector<string> reverseWords(string s)
{
    string temp = ""; int i=0;
    vector<string>ans;
    while(i<s.size())
    {
        char ch = s[i];
        if(ch != ' ')
            temp += s[i];// + "";
        else
        {
            if(temp != "")
            {
                ans.push_back(temp);
            }
            temp = "";
        }
        i++;
    }
    if(temp != "")
    {
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    vector<string> ans = reverseWords(s);

    for(int i=ans.size()-1; i>=0; i--)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

/*
Input: the sky is blue
Output: blue is sky the
*/