#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,dummy;
    int testcase;
    char capital_a = 'A', small_a = 'a';
    cin>>testcase;
    getline(cin,dummy);
    for(int i=0;i<testcase;i++)
    {
        getline(cin,str);
        for(int j=0;j<str.size();j++)
        {
            if((str.at(j)>='A')&&(str.at(j)<='Z'))
            {
                str.at(j)=str.at(j) - 'A' + 'a';
            }        
        }
        cout<<str<<"\n";
    }
    return 0;
}
