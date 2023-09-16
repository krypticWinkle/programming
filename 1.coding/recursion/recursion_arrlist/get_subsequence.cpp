#include <bits/stdc++.h>
using namespace std;
//substring is different from subsequence
vector<string> gss(string s)
{
    if(s.size() == 0)
    {
        vector<string> base_result;
        base_result.push_back("");
        return base_result;
    }
    char ch = s[0];
    string ros = s.substr(1);//bc
    vector<string> res_rec = gss(ros);//[--, -c, b-, bc]

    vector<string>my_result;
    for(string rstr: res_rec)
    {
        my_result.push_back("" + res_rec);
    }
    for(string rstr: res_rec)
    {
        my_result.push_back(ch + res_rec);
    }
    return my_result;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}