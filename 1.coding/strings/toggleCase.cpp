#include<bits/stdc++.h>
using namespace std;

void toggleCases(string &str)
{
    //string ans = "";
    for(int i=0;i<str.size(); i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
            //ans += ch;
        }
        else
        {
            str[i] = str[i] - 32;
            //ans += ch;
        }
    }
    //return ans;

}

int main ()
{
    string str; cin>>str;
    //toggleCases(str);
    //cout<<str;
    cout<<str[1]-str[0];
    return 0;
}