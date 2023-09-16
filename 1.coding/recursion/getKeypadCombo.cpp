#include<bits/stdc++.h>
using namespace std;

/*    string keyset[] = {"0 .;", "1 abc", "2 def", "3 ghi",
.                             "4 jkl", "5 mno", "6 pqrs", "7 tu", "8 vwx", "9 yz"};*/

vector<string> allPossibleWords(string keyset[], string str)
{
    if(str.size() == 1)
    {
        vector<string> ax;
        char aa = str[0];
        for(int i=0; i< keyset[aa - '0'].size(); i++)
        {
            string ld = ""; 
            ax.push_back(keyset[aa - '0'].at(i) + ld);
        }
        //ax.push_back("");
        return ax;
    }
    //578
    string st = ""; char first_char = str[0];
    string x = first_char + st;//8

    vector<string> ans = allPossibleWords(keyset, str.substr(1));
    int size = ans.size();

    vector<string> ans2;
    // for(int i=0; i< size; i++)
    // {
    //     ans2.push_back(ans[i]);
    // }

    for(int i=0; i< keyset[first_char - '0'].size(); i++)
    {
        for(int j=0; j< size; j++)
        {
            ans2.push_back(keyset[first_char - '0'].at(i) + ans[j]);
        }
    }
    return ans2;
}



int main()
{
    string keyset[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    string str; cin>>str;

    //for(int i=0; i<10; i++)
    // {
    //     cout<<keyset[7]<<", ";
    // }

    vector<string>ans = allPossibleWords(keyset, str);
    cout<<"[";
    for(int i=0; i<ans.size()-1; i++)
    {
        cout<<ans[i]<<", ";
    }
    cout<<ans[ans.size()-1]<<"]";
    return 0;
}