#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,numRows;
    string s,str="";
    cin>>s;
    cin>>numRows;
    int k = numRows-2;
    vector<char> p[numRows];

    for(i=0;i<s.size();)
    {
        for(j=0;j<numRows;j++)
        {
            if(i<s.size())
            {
                p[j].push_back(s[i]);
                i++;
            }
            else
            {
                break;
            }
        }

        for(j=k;j>=1;j--)
        {
            if(i<s.size())
            {
                p[j].push_back(s[i]);
                i++;
            }
            else
            {
                break;
            }
        }
    }
    //string str="";
    for(i=0;i<numRows;i++)
    {
        for(j=0;j<p[i].size();j++)
        {
            str+=p[i][j];
        }
    }
    cout<<str;
    return 0;
}