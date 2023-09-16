#include<bits/stdc++.h>
using namespace std;

void allPalindromes(string str)
{
    for(int i=0; i<str.size(); i++)
    {
        for(int j=1; j<=str.size()-i; j++)
        {
            string temp = str.substr(i, j);
            //Palindrome Logic below
            for(int a=0; a<=temp.size()/2; a++)
            {
                if(temp.at(a) != temp.at(temp.size() - a -1))
                {
                    break;
                }
                if(a == temp.size()/2)
                {
                    cout<<temp<<" ";
                }
            }
        }
    }
}
int main()
{
    string str; cin>>str;
    allPalindromes(str);
    //string a = "ab cde fg sdh saa cdc";
    return 0;
    
}