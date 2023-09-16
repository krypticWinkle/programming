#include<bits/stdc++.h>
using namespace std;

string compression1(string str)
{
    int len = str.size();
    char prevChar = str[0];
    string dummy = "";

    string ans = prevChar + dummy;
    //cout<<ans<<"\n";
    
    for(int i=1; i<len; i++)
    {
        if(str[i] != prevChar)
        {
            ans = ans + str[i];
            prevChar = str[i];
        }
    }
    return ans;
}

string compression2(string str)
{
    char x = str[0]; string dummy = "";
    string ans = x + dummy;
    int count = 1, len = str.size();

    for(int i=1; i<len; i++)
    {
        if(str[i] == x)
        {
            count++;
            //when i reaches the last character, well add the digit to the string
            if(i == len-1)
            {
                ans += to_string(count);
            }
        }
        else
        {
            if(count != 1)
            {
                ans += to_string(count);
                x = str[i];
                ans += x;
                count = 1;
            }
            else
            {
                x = str[i];
                ans += x;
            }
        }
    }
    return ans;
}

int main()
{
    string str; cin>>str;
    cout<<compression1(str)<<"\n";
    cout<<compression2(str);
    return 0;
}

/*
i/p: wwwwaaadexxxxxx
o/p:
wadex
w4a3dex6*/