#include<bits/stdc++.h>
using namespace std;
string final_pair(string , string);

string first_pair(string s1, string s2, string s3)
{
    int i=0,j;
    string output1 = "",lcf;

    for(j=0;j<s1.size();j++)
    {
        if(s1.at(i)==s2.at(j))
        {
            output1=output1 + s1.at(j);
            i++;
        }
        else
        {
            break;
        }        
    }    
    lcf=final_pair(output1,s3);
    return lcf;
}

string final_pair(string output1, string s3)
{
    int i=0,j;
    string lcf = "";

        for(j=0;j<output1.size();j++)
        {
            if(output1.at(i)==s3.at(j))
            {
                lcf=lcf + output1.at(j);
                i++;
            }
            else
            {
                break;
            }    
        }
        return lcf;
}
int main()
{
    string s1,s2,s3,temp,output11;
    int testcase;
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        cin>>s1>>s2>>s3;
        if(s1.size()>=s2.size())
        {
            temp=s2;
            s2=s1;
            s1=temp;
        }
        output11 = first_pair(s1,s2,s3);
        cout<<output11;
    }
        return 0;
}