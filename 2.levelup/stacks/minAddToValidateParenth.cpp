#include<bits/stdc++.h>
using namespace std;

//921. Minimum Add to Make Parentheses Valid (Leetcode)

int minimumReqBrackets(string s)
{
    stack<char>st; int count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(')
        {
            st.push('(');
        }
        else
        {
            if(st.empty() == true)
            {
                count++;
            }
            else
            {
                st.pop();
            }
        }
    }
    return st.size() + count;
}

int main()
{
    string str; cin>>str;
    cout<<minimumReqBrackets(str);
    return 0;
}