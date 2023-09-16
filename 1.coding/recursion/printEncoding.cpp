#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define xx ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void printEncoding(string s, string asf)
{
    if(s.size() == 0)
    {
        cout<<asf<<endl;
    }
    else if(s.size() == 1)
    {
        if(s != "0")
        {
            int ch= s[0] - '0';
            if(ch != 0)
            {
                char code = 'a' + ch-1;
                cout<<asf+code<<endl;
            }
        }
        else
        {
            return;
        }
    }
    if(s.size() >= 2)
    {
        int ch= s[0] - '0';
        if(ch != 0)
        {
            char code = 'a' + ch-1;
            printEncoding(s.substr(1), asf + code);
        }
        else
        {
            return;
        }
        int ch12 = stoi(s.substr(0, 2));
        if(ch12 <= 26 && ch12 >= 10)
        {
            char code12 = 'a' + ch12-1;
            printEncoding(s.substr(2), asf + code12);
        }
        else
        {
            return;
        }
    }

}

int32_t main()
{
    xx;
    string str;
    cin>>str;
    printEncoding(str, "");
    //string a = "abcdefghij";
    //cout<<a.substr(1, 2);
    
    return 0;
}