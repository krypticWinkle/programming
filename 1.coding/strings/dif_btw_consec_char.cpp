#include<bits/stdc++.h>
using namespace std;

void charDiff(string &str)
{
    string ans = "", dummy = "";
    
    for(int i=1; i<str.size(); i++)
    {
        char back = str[i-1], front = str[i];
        int gap = front - back;
        ans += str[i-1] + to_string(gap);
    }

    ans += str[str.size()-1] + dummy;
    cout<<ans;
}

int main ()
{
    string str; cin>>str;
    if(str.size() == 1)
    {
        cout<<str;
        return 0;
    }
    charDiff(str);
    return 0;
}