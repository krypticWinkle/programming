#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,dummy;
    int testcase;
    char capital_A = 'A', small_a = 'a';
    cin>>testcase;
    getline(cin,dummy);//to store the pressing of enter.
    for(int i=0;i<testcase;i++)
    {
        getline(cin,str);
        for(int j=0;j<str.size();j++)
        {
            if((str.at(j)>='a')&&(str.at(j)<='z'))
            {
                str.at(j)=str.at(j) + 'A' - 'a';
                //str.at(j)=str.at(j) - 25; This does not work.
            }
                
        }
        //int x = 'A' - 'a', xx = '0';
        //cout<<x<<" " <<xx;
        cout<<str<<"\n";
    }
    return 0;
}