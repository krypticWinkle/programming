#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // getline(cin, s, ' ');//press enter, it'll still take input. press spacebar, it'll stop
    // cout<<s<<"\n";


    string str = "abcdefghijklm";
    //str.substr(1); //all characters from 1st character
    cout<<str.substr(0, 4)<<" ";//i.e. 4 characters including 0th character
    cout<<str.substr(1, 4)<<" ";
    cout<<str.substr(2, 4)<<" ";
    cout<<str.substr(3, 4)<<" ";
    cout<<str.substr(4, 4)<<" ";
    cout<<"\n";

    string x = "abcde";
    for(int i=0; i<x.size(); i++)
    {
        for(int j=1; j<=x.size()-i; j++)
        {
            string y = x.substr(i, j);
            cout<<y<<" ";
        }
    }
    string a = "ab cde fg sdh saa cdc";
    
}