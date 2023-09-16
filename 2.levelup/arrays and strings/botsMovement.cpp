#include<bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/contest/interview-series-ola-cabs/problems/#problems
//https://practice.geeksforgeeks.org/contest/interview-series-ola-cabs/problems/#



string moveRobots(string s1, string s2)
{
    char x, y; int pos1, pos2;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] == 'A')
        {
            x = 'A';
            pos1 = i;
        }
        if(s1[i] == 'B')
        {
            y = 'B';
            pos2 = i;
        }
    }
    for(int i=pos1+1; i<s1.size(); i++)
    {
        if(s1[i] != '#' && s1[i] != x)
        {
            y = s1[i];
            pos2 = i;
            break;
        }
        else if(s1[i] != '#' && s1[i] != y)
        {
            y = s1[i];
            pos2 = i;
            break;
        }
    }
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i] != '#' && s2[i]==x)
        {
            if(i )
            {
                return "Yes";
            }
        }
        else if(s2[i] != '#' && s2[i] !=x)
        {
            return "No";
        }
    }
    return "No";
}


    int main()
    {
        return 0;
    }