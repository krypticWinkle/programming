#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define xx ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

void printPermutations(string s, string asf)
{
    if(s.size() == 0)
    {
        cout<<asf<<endl;
    }
    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        
        string b_ch = s.substr(0, i);
        string a_ch = s.substr(i+1);
        string ros = b_ch + a_ch;

        printPermutations(ros, asf + ch);
    }
}

int32_t main()
{
    xx;
    string str;
    cin>>str;
    printPermutations(str,"");
    
    return 0;
}