#include<bits/stdc++.h>
using namespace std;

bool isPossible(string act, string faul)
{
    int i=0, j=0;
    while(i < act.size() && j < faul.size())
    {
        if(act[i] == faul[j])
        {
            i++; j++;
        }
        else
        {
            if(i>0 && act[i-1] == faul[j])
            {
                j++;
            }
            else
            {
                return false;
            }
            // while(faul[j] == act[i-1] || faul[j] == act[i])
            // {
            //     j++;
            // }
        }
    }
    while(j < faul.size() && act[i-1] == faul[j])
    {
        j++;
    }
    if(i==act.size() && j == faul.size())
    {
        return true;
    }
    return false;
}

int main()
{
    string actual, faulty; 
    cin>>actual>>faulty;

    if(isPossible(actual, faulty))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}