#include<bits/stdc++.h>
using namespace std;

static string codes[10] = {".;", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void getkpc(string digits, string ans)
{
    if(digits.size() == 0)
    {
        cout<<ans<<" ";
        return;
    }
    char fir_digit = digits[0];//5
    string rest_digits = digits.substr(1);//73

    string x = codes[fir_digit - '0'];
    for (int i=0; i<x.size(); i++)
    {
        char fir_of_x = x.at(i);
        getkpc(rest_digits, ans + fir_of_x);
    }

}
int main ()
{
    string input; cin>>input;
    cout<<"[";
    getkpc(input, "");
    cout<<"]";
    return 0;
}